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
		do
		{
			int flag, choice;
			system("cls");
			cout << "\n\n\n\t Main Menu";
			cout << "\n\n\n\t 1-Add Book";
			cout << "\n\n\n\t 2-Delete Book";
			cout << "\n\n\n\t 3-View The Book List";
			cout << "\n\n\n\t 4-Exit";
			cout << "\n\n\n\t Input decision--> ";
			cin >> choice;
			switch (choice)
			{
			case 1:
				system("cls");
				flag:
				bookViewModel.addBook();
				cout << "\n\n\n\t 1-Add Another Book\n\n\t 2-Go Back To The Menu";
				cin >> choice;
				if (choice == 1)
					goto flag;
				break;
			case 2:
				system("cls");
				flag:
				bookViewModel.deleteBook();
				cout<< "\n\n\n\t 1-Delete Another Book\n\n\t 2-Go Back To The Menu";
				cin >> choice;
				if (choice == 1)
					goto flag;
				break;
			case 3:
				system("cls");
				flag:
				bookViewModel.listBooks();
				cout << "\n\n\n 1-Go Back To The Menu";	
			}
			

		} while (choice != 4);

	}
}