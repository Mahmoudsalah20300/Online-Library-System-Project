
#include "Book.h"

int Book::count = 0;

/*This is the default Constructor it supposed to initialize all fields*/
Book::Book()
{
	title = "";
	isbn = "";
	category = "";
	averageRating = 0.0;
	count++;
	id = count;
	User author;
	ratenums  = 0;
    rate_sums =0.0;
}


Book::Book(string title,string isbn,string category)
{
	this->title    = title;
	this->isbn	   = isbn;
	this->category = category;
	count++;
	id = count;
	averageRating = 0.0;
	User author;
	ratenums = 0;
	rate_sums = 0.0;
}

Book::Book(const Book& book)
{
	title         = book.title;
	isbn          = book.isbn;
	category      = book.category;
	author        = book.author;
	averageRating = book.averageRating;
	id			  = book.id;
	rate_sums     = book.rate_sums;
	ratenums      = book.ratenums;
}


void Book::setTitle(string T)
{
	title = T;
}

string Book::getTitle()const 
{
	return title;
}


void Book::setIsbn(string ISBN)
{
	isbn = ISBN;
}

string Book::getIsbn()const
{
	return isbn;
}

void Book::setId(int ID)
{
	id = ID;
}

int Book::getId()const
{
	return id;
}

void Book::setCategory(string CATEG)
{
	category = CATEG;
}

string Book::getCategory()const
{
	return category;
}

void Book::setAuthor(const User& auth)
{
	author = auth;
}

User Book::getAuthor()const
{
	return author;
}

void Book::rateBook(double rate)
{
	ratenums++;
	rate_sums += rate;
	averageRating = rate_sums / ratenums;
}

double Book::getAverageRating()const
{
	return averageRating;
}


bool Book::operator==(const Book& book)
{
	return(title == book.title && isbn == book.isbn && id == book.id && category == book.category && averageRating == book.averageRating && author == book.author);
}


istream& operator>>(istream& input,Book& book)
{
	cout << "Enter the Book information in this order" << endl;
	cout << "Title\t" << "isbn\t" << "Category\t" << "Author\t" << endl;
	cout << "(Space seperated)" << endl;
	input >> book.title >> book.isbn >> book.category >> book.author;
	book.averageRating = 0.0;
	return input;
}


/*Re-Define the << operator in Ostream Lib to deal with object*/
ostream& operator<<(ostream& output, const Book& book)
{
	output << "===========Book " << book.id << " info===========" << endl;
	output << "Title:" << book.title << endl;
	output << "|isbn:" << book.isbn << endl;
	output << "|Category:" << book.category << endl;
	output << "|Average rating:"<< book.averageRating<<endl;
	if (book.author.getName() != "")
	{
		output << "|Author:" << book.author << endl;
	}
	cout << "===========================" << endl;
	return output;
}
