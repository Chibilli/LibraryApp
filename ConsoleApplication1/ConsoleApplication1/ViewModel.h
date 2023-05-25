#pragma once
#include "Model.h"
#include <iostream>
#include <iostream>
#include <fstream>
#include "Model.cpp"
#include "Helper.h"
#include <vector>

using namespace std;
class ViewModel
{
private:
	const string FILE_URL = "C:\\Project\\Library.txt";
	const string FILE_NAME = "Library.txt";
    

public:
	ViewModel() {
		User user = {"admin", "admin123"};
		User user2 = { "Kiddanube4", "Bmwgtrm3" };
	}
	string userName;
	string passWord;
protected:
	vector <Book> bookList;
	

public:
	void addbook()
	{
		int f;
		Book book;
		cin.ignore();
		cout << "Kitap Ismi: ";
		getline(cin, book.bookname);
		cout << "Kitap Yazari: ";
		getline(cin, book.author);
		cout << "YayinEvi:  ";
		getline(cin, book.publishers);
		cout << "Kitap Turu: ";
		getline(cin, book.type);
		cout << "Ozel Detay Girmek Ister misiniz? Evet/Hayir ---> 1/0";
		cin >> f;
		switch (f) {
		case 0:

			break;
		case 1:
			cout << "Detayi Girin.";
			cin.ignore();
			getline(cin, book.specialdetails);
			break;
		}


		fstream liste;
		liste.open(FILE_NAME , ios::out | ios::app | ios::ate);

		if (!liste.is_open())
		{
			cout << "Kitap Yazdirilamadi!Tekrar Deneyin!";
		}
		else
		{
			liste << "{\n";
			liste << "Id:";
			liste << book.bookid;
			liste << "\n";
			liste << "BookName:";
			liste << book.bookname;
			liste << "\n";
			liste << "Author:";
			liste << book.author;
			liste << "\n"; 
			liste << "Publisher:";
			liste << book.publishers;
			liste << "\n";
			liste << "SpecialDetails:";
			liste << book.specialdetails;
			liste << "\n},\n";
			bookList.push_back(book);
		}

		book.bookid++;
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

	User createUser(string userName, string passWord) {

		User user = {userName, passWord};
		return user;
	}

	void listBooks() {
		if (bookList.size() != 0) {
			for (Book book : bookList) {
				cout << book.bookid << endl;
				cout << book.bookname << endl;
				cout << book.author << endl;
				cout << book.publishers << endl;
				cout << book.specialdetails << endl;
			}
		}
		else {
			cout << "liste bos" << endl;
		}
	}

	void deleteBook() {
	    
		int bookId;
		cin >> bookId;

		for (Book book : bookList) {
			if (bookId == book.bookid) {
				int currentIndex = Helper::getIndex(bookList, book);
				bookList.erase(bookList.begin() + currentIndex);
			}
		}
		

	}


	
};

