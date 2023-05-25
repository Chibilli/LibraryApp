#include<iostream>
#include<string>
#include<fstream>
#include "ViewModel.h"


using namespace std;



int main()
{
	ViewModel bookViewModel;
	
	cout << "Kullanici Adi: ";
	cin >>  bookViewModel.userName;
	cout << "Kullanici Sifresi: ";
	cin >> bookViewModel.passWord;

	if (bookViewModel.Login(bookViewModel.userName, bookViewModel.passWord)) {
		int flag;
		flag:
		system("cls");
		int n;
		cout << "1-Kitap Ekle\n2-Kitap Cikar\n3-Kitap Listesini Goruntule\n\n";
		cout << "Islem secin --->";
		cin >> n;
		switch (n)
		{
		case 1:
			system("cls");
			bookViewModel.addbook();
			cout << "1-Geri Dön\n2-Uygulamadan Cik";
			int s;
			cin >> s;
			switch (s) {
			case 1:
				goto flag;
				break;
			case 2:
				break;
			}
			break;
		case 2:
			system("cls");
			cout << "----Kitap Cikar----\n\n";
			break;
		case 3:
			system("cls");
			cout << "Kitap Listesini Goruntule\n\n";
			bookViewModel.listBooks();
			break;
		}
	}
	else
	{
		system("cls");
		int n;
		cout << "Kullanici girisi basarili\n\n\n";
		cout << "1-Kitap Ekle\n2-Kitap Listesini Goruntule\n\n";
		cout << "Islem Secin --->";
		cin >> n;
		switch (n)
		{
		case 1:
			system("cls");
			cout << "----Kitap Ekleme----\n\n";
			break;

		case 2:
			system("cls");
			cout << "Kitap Listesini Goruntule\n\n";
			break;
		}


	}
}