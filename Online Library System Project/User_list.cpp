#include "User_list.h"



UserList::UserList()
{
	capacity = 0;
	usersCount = 0;
	users = nullptr;
}

UserList::UserList(int capacity)
{
	this->capacity = capacity;
	users = new User[capacity];
	usersCount = 0;
}


void UserList::addUser(User& user)
{
	if (usersCount < capacity) {
		users[usersCount] = user;
		usersCount++;
	}
	else
		cout << "Segmentation Error: You surpassed array Capacity" << endl;
}

User* UserList::searchUser(string name)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i].getName() == name)
		{
			return &users[i];
		}
	}
	return nullptr;
}



User* UserList::searchUser(int id)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i].getId() == id)
		{
			return &users[i];
		}
	}
	return nullptr;
}


void UserList::deleteUser(int id)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i].getId() == id)
		{
			while (i < usersCount - 1)
			{
				users[i] = users[i + 1];
				i++;
			}
			usersCount--;
			capacity--;
			break;
		}
	}
}


ostream& operator<<(ostream& output, const UserList& userList)
{
	for (int i = 0; i < userList.usersCount; i++)
	{
		output << userList.users[i];
	}
	return output;
}


UserList::~UserList()
{
	delete[]users;
}
