#include "BookList.h"



BookList::BookList(){

	books = nullptr;
	capacity = 0;
	booksCount = 0;
}


BookList::BookList(int capacity)
{
	this->capacity = capacity;
	booksCount = 0;
	books = new Book[capacity];
}



void BookList::addBook(const Book& book)
{
	if (booksCount < capacity) {
		books[booksCount] = book;
		books[booksCount].setId(booksCount + 1);
		booksCount++;
	}
	else {
		cout << "Segementation Error: You surpassed the current capacity"<<endl;
	}
}

Book* BookList::searchBook(string name)
{
	for (int i = 0; i < booksCount; i++)
	{
		if (books[i].getTitle() == name)
		{
			return &books[i];
		}
	}
	return nullptr;
}

Book* BookList::searchBook(int id)
{
	for (int i = 0; i < booksCount; i++)
	{
		if (books[i].getId() == id)
		{
			return &books[i];
		}
	}
	return nullptr;

}


void BookList::deleteBook(int id)
{
	for (int i = 0; i < booksCount; i++)
	{
		if (books[i].getId() == id)
		{
			while (i <booksCount-1)
			{
				books[i] = books[i + 1];
				books[i].setId(i + 1);
				i++;
			}

			booksCount--;
			capacity--;
			break;
		}
	}
}


ostream& operator<<(ostream& output, const BookList& booklist)
{
	for(int i=0;i<booklist.booksCount;i++)
	{
		output << booklist.books[i];
	}
	return output;
}


BookList::~BookList()
{
	delete[] books;
}


Book BookList::getTheHighestRatedBook()
{
	double HighstRate = -1.0;
	int index=0;
	for (int i = 0; i < booksCount; i++)
	{
		if (books[i].getAverageRating() >= HighstRate)
		{
			HighstRate = books[i].getAverageRating();
			index = i;
		}
	}
	return books[index];
}



void BookList:: getBooksForUser(const User& user)
{
	bool found = false;
	for (int i = 0; i < booksCount; i++)
	{
		if (books[i].getAuthor() == user)
		{
			found = true;
			cout <<"  "<< books[i]<<endl;
		}
	}
	if (found == false)
	{
		cout << "The Author has No book Currently"<<endl;
	}
}

Book& BookList:: operator[] (int position)
{
	if (position < 0 || position >= booksCount)
	{
		cout << "Segementation Error: Negative integers are not allowed" << endl;
	}
	return books[position];
}




