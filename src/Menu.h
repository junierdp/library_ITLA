/*
 * Menu.h
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#ifndef MENU_H_
#define MENU_H_
#include "Stack.h"

class Menu
{
	private:
		void clearScreen();
		void pause();
		bool validate(int option);
		void routeAction(int option);
		void getAllBooks();
		void addBook();
		void getLastBook();
		void getByCategory();
	public:
		void show();
		Menu();
};

#endif /* MENU_H_ */
