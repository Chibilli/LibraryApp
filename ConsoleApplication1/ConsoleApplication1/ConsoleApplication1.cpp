#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct book
{
	char bookname;
	char author;
	char publishers;
	int bookid = 0;
	char type;
	char specialdetails];
}book;

struct User
{
	string username;
	string password;
};

void addbook()
{
	int f;
	cout << "Kitap Ismi: ";
	cin >> book.bookname;
	cout << "Kitap Yazari: ";
	cin >> book.author;
	cout << "YayınEvi: ";
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

int main()
{
	User admin = { "admin","admin123" };
	User user;

	cout << "Kullanici Adi: ";
	cin >> user.username;
	cout << "Kullanici Sifresi: ";
	cin >> user.password;

	if (Login(user.username, user.password)) {
		int flag;
		flag:
		system("cls");
		int n;
		cout << "Admin girisi basarili\n\n\n";
		cout << "1-Kitap Ekle\n2-Kitap Cikar\n3-Kitap Listesini Goruntule\n\n";
		cout << "Islem secin --->";
		cin >> n;
		switch (n)
		{
		case 1:
			system("cls");
			addbook();
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