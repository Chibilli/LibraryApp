#include<iostream>
#include<string>
#include<fstream>
#include "ViewModel.h"


using namespace std;



int main()
{
	ViewModel bookViewModel;
	int choice, flag, flag1, flag2;

	cout << "\n\n\n\t Enter The Username: ";
	cin >>  bookViewModel.userName;
	cout << "\n\n\t Enter The Password: ";
	cin >> bookViewModel.passWord;

	if (bookViewModel.Login(bookViewModel.userName, bookViewModel.passWord)) {
		do
		{
			system("cls");
			cout << "\n\n\n\t\t Main Menu";
			cout << "\n\n\n\t 1-Add Book";
			cout << "\n\n\n\t 2-Delete Book";
			cout << "\n\n\n\t 3-View The Book List";
			cout << "\n\n\n\t 4-Exit";
			cout << "\n\n\n\t Input decision--> ";
			cin >> choice;
			switch (choice)
			{
			case 1:
				flag:
				bookViewModel.addBook();
				cout << "\n\n\n\t 1-Add Another Book\n\n\t 2-Go Back To The Menu";
				cin >> choice;
				if (choice == 1)
					goto flag;
				break;
			case 2:
				flag1:
				bookViewModel.deleteBook();
				cout << "\n\n\n\t 1-Delete Another Book\n\n\t 2-Go Back To The Menu";
				cin >> choice;
				if (choice == 1)
					goto flag1;
				break;
			case 3:
				bookViewModel.listBooks();
				cout << "\n\n\n Press Anyone Key To Return To The Menu";
				break;
			case 4:
				exit(0);
				break;
			}
		} while (choice != 4);
	}
	else
	{
		do
		{
			system("cls");
			cout << "\n\n\n\t\t Manin Menu";
			cout << "\n\n\n\t 1-Add Book";
			cout << "\n\n\n\t 2-View The Book List1 ";
			cout << "\n\n\n\t 3-Exit";
			cout << "\n\n\n\t Input decision--> ";
			cin >> choice;
			switch (choice)
			{
			case 1:
				flag2:
				bookViewModel.addBook();
				cout << "\n\n\n\t 1-Add Another Book\n\n\t 2-Go Back To The Menu";
				cin >> choice;
				if (choice == 1)
					goto flag;
				break;
			case 2:
				bookViewModel.listBooks();
				cout << "\n\n\n Press Anyone Key To Return To The Menu";
				break;
			case 3:
				exit(0);
				break;
			}
		} while (choice != 3);
	}
	return 0;
}