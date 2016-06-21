/*
 * Menu.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Menu.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void Menu::clearScreen()
{
	#ifdef _WIN32
	system("cls");
	#else
	system("clear");
	#endif
}

void Menu::pause()
{
	#ifdef _WIN32
	system("pause");
	#else
	system("read -n1 -r -p \"Press any key to continue...\" key");
	#endif
}


bool Menu::validate(int option)
{
	if(option >= 1 && option <= 5)
	{
		return true;
	}else
	{
		cout << "Please pick an option between 1 and 5"<< endl;
		pause();
		return false;
	}
}

void Menu::routeAction(int option)
{
	switch(option)
	{
	case 1:
		listItems();
		break;
	case 2:
		addItems();
		break;
	case 3:
		requestLastBook();
		break;
	case 4:
		searchByCategory();
		break;
	case 5:
		cout << "Thanks for using our software, good bye!" << endl;
	}
	pause();
}

void Menu::listItems()
{
    Stack* stack = new Stack();
    Element* i = _stack -> pop();
        while(i != NULL)
			{
				 cout << i->getName() << "\t" << i->getAuthor() << "\t" << i-> getPublisher()<< "\t" << i->getDate() << "\t" << i->getCategory() << endl;
				 i = _stack->pop();
			}
	//cout << "List Book" << endl;
}
Stack* _stack = new Stack();

void Menu::addItems()
{
    std::string name, author, publisher, date, category;

	cout <<"Write book's name: "<<endl;
	cin>>name;

	cout <<"Write Author's name:"<<endl;
	cin>>author;

	cout<<"Write Publisher: "<<endl;
	cin>>publisher;

	cout <<"Write published date: "<< endl;
	cin>>date;

	cout <<"Write category: "<<endl;
	cin>>category;

	Element* book = new Element(name, author , publisher,date,category);

	 _stack->push(book);
	//cout << "Add Book" << endl;
}

void Menu::requestLastBook()
{
    Element* i = _stack -> pop();
			while(i != NULL)
			{
			 cout << i->getName() << "\t" << i->getAuthor() << "\t" << i-> getPublisher()<< "\t" << i->getDate() << "\t" << i->getCategory() << endl;
					 i = _stack->pop();
				}
	//cout << "Request a Book"<< endl;
}

void Menu::searchByCategory()
{
	cout << "search by category" << endl;
}
void Menu::show()
{
    int option;
		do
		{
			clearScreen();
			cout << "Library ITLA" << endl;
			cout << "1- List Book" << endl;
			cout << "2- Add Book" << endl;
			cout << "3- Request Last Book" << endl;
			cout << "4- Search book By category" << endl;
			cout << "5- Exit" << endl;
			cout << "Select an option => ";
			cin >> option;
			if(validate(option))
			{
				routeAction(option);
			}
		}while(option !=5);
	//TODO: Implement this method.
	//cout << "Implement the menu" << endl;
}

Menu::Menu()
{

}

