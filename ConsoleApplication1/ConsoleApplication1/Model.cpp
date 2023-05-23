#include "Model.h"
#include <string>

using namespace std;
struct Book
{
	string bookname;
	string author;
	string publishers;
	int bookid = 0;
	string type;
	string specialdetails;
};


struct User
{
	string username;
	string password;
};