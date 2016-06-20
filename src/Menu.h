/*
 * Menu.h
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#ifndef MENU_H_
#define MENU_H_

class Menu
{
    private:
		void clearScreen();
		void listItems();
		void addItems();
		void requestLastBook();
		void searchByCategory();
		bool validate(int option);
		void routeAction(int option);
		void pause();

	public:
		void show();
		Menu();
};

#endif /* MENU_H_ */
