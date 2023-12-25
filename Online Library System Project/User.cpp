
#include "User.h"

int User::count = 0;

/*Constructor with no inputs */
User::User()
{
	name = "";
	age = 0;
	password = "";
	email = "";
	count++;
	id = count;
}

/* Overloading Constructor in this case thier is input to the Constructor*/
User::User(string name, int age, string password, string email)
{
	this->name = name;
	this->age = age;
	this->password = password;
	this->email = email;
	count++;
	id = count;
}

/*Copy Constructors:Default constructor to make the constructor filled with default values*/
User::User(const User& user)
{
	name = user.name;
	age = user.age;
	password = user.password;
	email = user.email;
}



/*Set and Get Method definetion for the name*/
/*We added Const to prevent the change in infos during run time*/
void User::setName(string n)
{
	name = n;
}

string User::getName()const
{
	return name;
}

/*Set and Get Method definetion for the Password*/
/*We added Const to prevent the change in infos during run time*/
void User::setPassword(string p)
{
	password = p;
}


string User::getPassword()const 
{
	return password;
}

/*Set and Get Method definetion for the Email*/
/*We added Const to prevent the change in infos during run time*/
void User::setEmail(string e)
{
	email = e;
}

string User::getEmail()const 
{
	return email;
}

/*Set and Get Method definetion for the age*/
/*We added Const to prevent the change in infos during run time*/

void User::setAge(int a)
{
	age = a;
}

int User:: getAge()const
{
	return age;
}

/*Set and Get Method definetion for the ID*/
/*We added Const to prevent the change in infos during run time*/
void User::setId(int i)
{
	id = i;
}


int User::getId()const
{
	return id;
}


/*Display all formation except Password*/
void User::Display()
{	
	cout << "********************************" << endl;
	cout << "Name:  " << name << endl;
	cout << "ID:    " << id    << endl;
	cout << "Age:   " << email << endl;
	cout << "Email: " << age   << endl;
	cout << "********************************" << endl;
}


/*Oveload "=="  to have the ability to equalize two objects*/
/*Here the only case that can be true is when use Copy constructor because move give value of particular address to another var 
  so they become the same*/
bool User::operator==(const User& user)
{
	if (name != user.name || email != user.email || age != user.age || id != user.id || password != user.password)
	{
		return false;
	}
	return true;
}



/*Re-Define the >> operator in istream Lib to deal with object*/
istream& operator>>(istream& input, User&user)
{
	cout << "Enter the user information in this order" << endl;
	cout << "Name\t" << "Age\t" << "Email\t" << "Password"<< endl;
	cout << "(Space seperated)" << endl;
	input >> user.name >> user.age >> user.email >> user.password;
	return input;
}


/*Re-Define the << operator in Ostream Lib to deal with object*/
ostream& operator<<(ostream& output, const User& user)
{
	output << "===========User" << user.id << "info===========" << endl;
	output << "Name:" << user.name<<endl;
	output << "|Age:" << user.age << endl;
	output << "|ID:" << user.id << endl;
	output << "|Email:" << user.email << endl;
	cout << "===========================" << endl;
	return output;
}