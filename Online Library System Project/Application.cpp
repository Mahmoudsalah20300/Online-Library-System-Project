#include"User.h"
#include"User_list.h"
#include"Book.h"

int main()
{
	UserList U(5);
	User u1;
	User u2;
	User u3;
	U.addUser(u1);
	U.addUser(u2);
	U.addUser(u3);
	U.deleteUser(2);
	cout << U;
	return 0;
}