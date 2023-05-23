#include "Model.h"
#include <string>

using namespace std;
struct Book
{
	char bookname;
	char author;
	char publishers;
	int bookid = 0;
	char type;
	char specialdetails;
};


struct User
{
	string username;
	string password;
};