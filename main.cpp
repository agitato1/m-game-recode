#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

/*

	COLOR: E = MENU
	COLOR: c/4 = GAMEOVER
	
*/

//CREDITS VIEW
static void cr() {

	string lu = "31/01/2024", vs = "1.0.0";

	cout << "  ____________________________________________________________\n"
		" |                                                            |\n"
		" |                        CREDITS                             |\n"
		" |                        M-GAME                              |\n"
		" |____________________________________________________________|\n"
		" |                                                            |\n"
		" |  Last Update:        " << lu << "                            |\n"
		" |  Game Version:           " << vs <<"                             |\n"
		" |                                                            |\n"
		" |____________________________________________________________|\n\n";

	exit(0);

}

// GAMEOVER VIEW
static void go()
{
	system("color 4");
	system("cls");

	cout << "   _____          __  __ ______    ______      ________ _____  \n  / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\ \n | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) |\n | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  / \n | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\ \n  \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\\n \n";

	for (int i = 0; i < 2; i++)
	{
		Sleep(1000*1);
		system("color c");
		Sleep(1000*1);
		system("color 4");
	}

	cr();

}

int main()
{
	// WINDOW TITLE
	SetConsoleTitleA("[M-GAME]");

	// DECLARATIONS
	string ta = "N", n = "Default", dv = "---------------", us = "    (+!+)\n    __|__    \n      | \n    _|-|_    ";
	char v = '|', S = ' ', exp='0', r = 'r';

	do {

		cout << ".___  ___.            _______      ___      .___  ___.  _______ \n|   \\/   |           /  _____|    /   \\     |   \\/   | |   ____|\n|  \\  /  |  ______  |  |  __     /  ^  \\    |  \\  /  | |  |__   \n|  |\\/|  | |______| |  | |_ |   /  /_\\  \\   |  |\\/|  | |   __|  \n|  |  |  |          |  |__| |  /  _____  \\  |  |  |  | |  |____ \n|__|  |__|           \\______| /__/     \\__\\ |__|  |__| |_______|\n " << endl;
		for (int i = 0; i < 3; i++) {
			system("color 6");
			Sleep(1000);
			system("color e");
			Sleep(1000);
		}

		cout << "Insert your nickname: ";
		cin >> n;

		Sleep(1000*3);
		system("cls");
		system("color 0");

		
		system("color 1");

		cout << dv << "[" << n << "]" << dv << endl;
		cout << v << "HP:" << v << v << " " << v << "ARMA:" << r << v << S << v << "EXP:" << exp << v << endl;
		cout << dv << dv << endl;
		cout << us << endl;
		cout << dv << dv << endl;

		cout << "1) SWORD   2)   BOW    3) AXE \n";
		cout << "Select your weapon: \n";
		cin >> r;

		switch (r) 
		{
			case '1': cout << "You have selected the Sword!\n"; break;
			case '2': cout << "You have selected the Bow!\n"; break;
			case '3': cout << "You have selected the Axe!\n"; break;
		}


		cout << "Try again? (yes/no)\n";
		cin >> ta;
		Sleep(1000 * 1);
		system("cls");

	} while (ta == "Y" || ta == "y" || ta == "yes" || ta == "Yes" || ta == "YEs" || ta == "YES" || ta == "YeS" || ta == "yeS" || ta == "yEs");

	if (ta == "N" || ta == "n" || ta == "No" || ta == "oN" || ta == "no")
	{
		cr();
	}

    system("pause");
    return 0;
}
