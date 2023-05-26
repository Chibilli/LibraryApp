#pragma once
#include "Model.h"
#include <iostream>
#include <iostream>
#include <fstream>
#include "Model.cpp"

using namespace std;
class ViewModel
{
private:
	const string FILE_NAME = "listBook.txt";
    

public:
	ViewModel() {
		User user = {"admin", "admin123"};
		User user2 = { "Kiddanube4", "Bmwgtrm3" };
	}
	string userName;
	string passWord;

public:
	void addBook()
	{
		system("cls");
		Book book;
		cin.ignore();
		cout << "Book Name: ";
		getline(cin, book.bookname);
		cout << "Author: ";
		getline(cin, book.author);
		cout << "Publisher: ";
		getline(cin, book.publishers);
		cout << "Type Of Book: ";
		getline(cin, book.type);

		fstream list;
		list.open(FILE_NAME , ios::out | ios::app | ios::ate);

		if (!list.is_open())
		{
			cout << "Kitap Yazdirilamadi!Tekrar Deneyin!";
		}
		else
		{
			list << "{\n";
			list << "BookName:";
			list << book.bookname;
			list << "\n";
			list << "Author:";
			list << book.author;
			list << "\n"; 
			list << "Publisher:";
			list << book.publishers;
			list << "\n";
			list << "Type Of Book:";
			list << book.type;
			list << "\n},\n";
			list.close();
		}
	}

	bool Login(string username, string password)
	{
		if (username == "admin" && password == "admin123")
		{
			cout << "Admin girisi basarili!" << endl;
			return true;
		}
		else
		{
			cout << "Kullanici girisi basarili" << endl;
			return false;
		}
	}

	void listBooks() {
		system("cls");
		ifstream list(FILE_NAME);
		if (list.is_open())
		{
			string line;
			if (getline(list, line))
			{
				cout << "\n\t\t All Books\n\n";
				cout << "\t" << line << endl;
			}
			else
			{
				cout << "\n\t Don't Found Book." << endl;
			}
			while (getline(list, line))
			{
				cout << "\t" << line << endl;
			}
		}
		else
		{
			cout << "\n\t Don't Found Book." << endl;
		}
		list.close();
		cout << "Press Any Key To Return To The Menu.";
		system("pause>0");
	}

	void deleteBook() 
	{
		system("cls");
		string bookName;
		cout << "\n\tEnter the name of the book to delete: ";
		cin.ignore();
		getline(cin, bookName);

		ifstream inputFile(FILE_NAME);
		ofstream tempFile("temp.txt");
		string line;
		int linesToDelete = 0;

		while (getline(inputFile, line))
		{
			if (line.find("BookName:" + bookName) != string::npos)
			{
				linesToDelete = 5; 
				continue;
			}
			if (linesToDelete > 0)
			{
				linesToDelete--;
				continue;
			}
			tempFile << line << endl;
		}

		inputFile.close();
		tempFile.close();

		remove(FILE_NAME.c_str());
		rename("temp.txt", FILE_NAME.c_str());

		cout << "\n\tBook '" << bookName << "' have been successfully deleted." << endl;
	}


	
};

