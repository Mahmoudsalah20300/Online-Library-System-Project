


#include "UTL.h"

void main_menu() {
   std::  cout << "Select one of the following choices : " << std::endl;
   std::  cout << "1- Books Menu" << std::endl;
   std::  cout << "2- Users Menu" << std::endl;
   std::  cout << "3- Exit " << std::endl;
}
void user_menu() {
   std:: cout << " USERS MENU" << std::endl;
   std:: cout << "1- Create a USER and add it to the list " << std::endl;
   std:: cout << "2- Search for a user " << std::endl;
   std:: cout << "3- Display all users " << std::endl;
   std:: cout << "4- Back to the main " << std::endl;
}
void search_user_menu() {
    std::cout << "SEARCH FOR A USER" << std::endl;
    std::cout << "1- Search by name" << std::endl;
    std::cout << "2- Search by id" << std::endl;
    std::cout << "3- Return to users Menu" << std::endl;
}
void delete_user_menu() {
    std::cout << "1- Delete user " << std::endl;
    std::cout << "2- Return to users Menu" << std::endl;
}
void book_menu() {
    std::cout << "BOOKS MENU" << std::endl;
    std::cout << "1- Create a book and add it to the list " << std::endl;
    std::cout << "2- Search for a book" << std::endl;
    std::cout << "3- Display all books (with book rating)" << std::endl;
    std::cout << "4- Get the highest rating" << std::endl;
    std::cout << "5- Get all books of a user " << std::endl;
    std::cout << "6- Back to the main menu" << std::endl;
}
void search_book_menu() {
    std::cout << "SEARCH FOR A BOOK" << std::endl;
    std::cout << "1- Search by name" << std::endl;
    std::cout << "2- Search by id" << std::endl;
    std::cout << "3- Return to Books Menu" << std::endl;
}
void search_book_name()
{
    std::cout << "1- Update author" << std::endl;
    std::cout << "2- Update name" << std::endl;
    std::cout << "3- Update Category" << std::endl;
    std::cout << "4- Delete Book" << std::endl;
    std::cout << "5- rate book" << std::endl;
    std::cout << "6- Get back to books menu" << std::endl;
}