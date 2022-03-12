#include <Windows.h>
#include <stdio.h>
#include <iostream>
#include <array>
#include <stdlib.h>
using namespace std;


int menuchoice;


int main()
{

	do {

		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole, FOREGROUND_GREEN);

		string hello = "Heaven <3 #100daycode";
		int x = 0;
			while (hello[x] != '\0')
			{
				cout << hello[x];
				Sleep(100);
				x++;
			};
			system("cls");
			
		std::cout << "\n \n	                                   1. Copy Cat Bot     ";
		std::cout << "\n \n	                                   2. want a compliment?     ";
		std::cout << "\n \n				 >:  ";

		std::cin >> menuchoice;

		switch (menuchoice) {
		case 1:
			system("cls");
			std::cout << "                                           Bot: Type anything and ill repeat it! "; 
			Sleep(2000);
			system("cls");
			do {
				
				string copycat;
				cout << "\n \n	                                   >: ";
				cin >> copycat; // cin.getline isn't working for me for some reason, so if you try typing sentences it wont work

				cout << "                                          Bot:" << copycat; // ill make it detect 
			} while (menuchoice != 0);

			break;
		case 2:
			system("cls");
			std::cout << "You're Amazing! ";
			Sleep(1000);
			system("cls");
		}

	} while (menuchoice != 0);
	
}


/* 
	I learned a lot of things trying to make this program
	it might seem bad 
	


*/