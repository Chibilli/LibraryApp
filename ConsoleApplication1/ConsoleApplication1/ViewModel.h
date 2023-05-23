#pragma once
#include "Model.h"
#include <iostream>
#include <iostream>
#include <fstream>
#include "Model.cpp"

using namespace std;
class ViewModel
{
public:
	ViewModel() {
		User user = {"admin", "admin123"};
		User user2 = { "Kiddanube4", "Bmwgtrm3" };
	}
	string userName;
	string passWord;
	

public:
	void addbook()
	{
		int f;
		Book book;
		cout << "Kitap Ismi: ";
		cin >> book.bookname;
		cout << "Kitap Yazari: ";
		cin >> book.author;
		cout << "YayýnEvi: ";
		cin >> book.publishers;
		cout << "Kitap Turu: ";
		cin >> book.type;
		cout << "Ozel Detay Girmek Ister misiniz? Evet/Hayir ---> 1/0";
		cin >> f;
		switch (f) {
		case 0:

			break;
		case 1:
			cout << "Detayi Girin.";
			cin >> book.specialdetails;
			break;
		}


		fstream liste;
		liste.open("C:\\Project\\Kütüphane.txt", ios::out | ios::app | ios::ate);

		if (!liste.is_open())
		{
			cout << "Kitap Yazdirilamadi!Tekrar Deneyin!";
		}
		else
		{
			liste << book.bookid;
			liste << "\t";
			liste << book.bookname;
			liste << "\t";
			liste << book.author;
			liste << "\t";
			liste << book.publishers;
			liste << "\t";
			liste << book.specialdetails;
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
};

