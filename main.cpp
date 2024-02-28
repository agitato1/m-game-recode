#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

/*

	COLOR: E = MENU
	COLOR: c/4 = GAMEOVER

*/

//LOWERCASE
string tlc(string in)
{
	for (auto& x : in) {
		x = tolower(x);
	}

	return in;
}

string dv = "---------------", n = "Default", us = "    (+!+)\n    __|__    \n      | \n    _|-|_    ", lu = "31/01/2024", vs = "1.0.0";
char v = '|', S = ' ', ep = '0', r = 'r';
int vi = 10;

//CREDITS VIEW
void cv() {

	cout << "  ____________________________________________________________\n"
		" |                                                            |\n"
		" |                        CREDITS                             |\n"
		" |                        M-GAME                              |\n"
		" |____________________________________________________________|\n"
		" |															    |\n"
		" |  Last Update:        " << lu << "                            |\n"
		" |  Game Version:           " << vs << "                             |\n"
		" |                                                            |\n"
		" |____________________________________________________________|\n\n";

	exit(0);

}

//INV. GUI
void ig() {
	system("cls");
	cout << dv << "[" << n << "]" << dv << endl;
	cout << v << "HP:" << vi << v << " " << v << "ARMA:" << r << v << S << v << "EXP:" << ep << v << endl;
	cout << dv << dv << endl;
	cout << us << endl;
	cout << dv << dv << endl;
}

// GAMEOVER VIEW
void gv()
{
	system("color 4");
	system("cls");

	cout << "   _____          __  __ ______    ______      ________ _____  \n  / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\ \n | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) |\n | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  / \n | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\ \n  \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\\n \n";

	for (int i = 0; i < 2; i++)
	{
		Sleep(1000 * 1);
		system("color c");
		Sleep(1000 * 1);
		system("color 4");
	}

	cv();

}

//WELCOME
void wlc() {
	cout << ".___  ___.            _______      ___      .___  ___.  _______ \n|   \\/   |           /  _____|    /   \\     |   \\/   | |   ____|\n|  \\  /  |  ______  |  |  __     /  ^  \\    |  \\  /  | |  |__   \n|  |\\/|  | |______| |  | |_ |   /  /_\\  \\   |  |\\/|  | |   __|  \n|  |  |  |          |  |__| |  /  _____  \\  |  |  |  | |  |____ \n|__|  |__|           \\______| /__/     \\__\\ |__|  |__| |_______|\n " << endl;
	for (int i = 0; i < 3; i++) {
		system("color 6");
		Sleep(1000);
		system("color e");
		Sleep(1000);
	}
}

//INIZIO
string ni() {
	wlc();
	string a;
	cout << "Insert your nickname: ";
	cin >> a;
	return a;
}

// PUNTINI
void p() {
	for (int i = 0; i < 3; i++)
	{
		Sleep(1000 * 1);
		cout << ".";
		ep++;
	}
}

// FIRST LEVEL
void m1() {
	ig();
	int n = 0;

	cout << "Hai incontrato un mostro, che fai?" << endl;
	cout << "1) Scappi" << v << " 2) Combatti" << v << " 3) Fai amicizia" << endl;
	cin >> n;

	switch (n) {
	case 1: 
		cout << "Hai fatto una scelta saggia"<<endl;
		p();
		cout << "Prosegui l'avventura.."<<endl;
		break;
	case 3: 
		cout << "Scelta errata";
		p();
		vi = 0;
		ig();
		cout << "Sei morto!" << endl;
		break;

		system("cls");
		ig();
		cout << "\nStato aggiornato!" << endl;

	}
}

void ar() {

	cout << "1) SWORD   2)   BOW    3) DAGGER \nSelect your weapon:";
	cin >> r;

	switch (r)
	{
	case '1':
		cout << dv <<endl;
		cout << "You have selected the Sword!\n";
		cout << dv << endl;
		cout << "      /| ________________\nO|===|* >________________>\n      \\|\n";
		Sleep(1000 * 3);
		r = 'S';
		break;
	case '2':
		cout << dv << endl;
		cout << "You have selected the Bow!\n";
		cout << dv << endl;
		cout << "   (\n    \\\n     )\n##-------->\n     )\n    /\n   (\n";
		Sleep(1000 * 3);
		r = 'B';
		break;
	case '3':
		cout << dv << endl;
		cout << "You have selected the Dagger!\n";
		cout << dv << endl;
		r = 'D';
		cout << "._._.|___________________\n|_|_||__________________/\n     |         " << endl;
		Sleep(1000 * 3);
		break;
	}

	system("cls");
}

int main()
{
	// WINDOW TITLE
	SetConsoleTitleA("[M-GAME]");

	// DECLARATIONS
	string ta = "No";

	do {

		string n = ni();

		Sleep(1000 * 3);
		system("cls");

		system("color 1");

		ig();

		ar();

		m1();
		Sleep(1000 * 3);


		cout << "Try again? (yes/no)\n";
		cin >> ta;
		Sleep(1000 * 2);
		system("cls");


	} while (tlc(ta) == "y" || tlc(ta) == "yes");

	cv();

	system("pause");
	return 0;
}
