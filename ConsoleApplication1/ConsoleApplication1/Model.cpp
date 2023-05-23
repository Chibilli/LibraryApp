#include "Model.h"
#include <string>

using namespace std;
struct Book
{
	int bookid = 0;
	string bookname;
	string author;
	string publishers;
	string type;
	string specialdetails;
};


struct User
{
	string username;
	string password;
};