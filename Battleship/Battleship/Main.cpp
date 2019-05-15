#include<iostream>
#include<Windows.h>
#include<ctime>
#include<string>
#include"FillArray.h"
#include"Location.h"
#include"Output.h"
#include"Battleship.h"
#include"Fire.h"
#include"Control.h"
#include"HallofFame.h"

using namespace std;

int main()
{
	system("mode con cols=80 lines=30");

	srand(unsigned(time(NULL)));

	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

	int computer[10][10];
	int playerone[10][10];
	int playertwo[10][10];

	int choise = 0;
	bool exit = false;

	while (exit!=true)
	{
		system("cls");
		SetConsoleTextAttribute(console, 9);
		cout << "\n\n\n\n\n\t\t\t\tBATTLESHIP\n" << endl;
		SetConsoleTextAttribute(console, 2);
		cout << "\t\t\t1. Computer VS Player\n" << endl;
		SetConsoleTextAttribute(console, 3);
		cout << "\t\t\t2. Player VS Player\n" << endl;
		SetConsoleTextAttribute(console, 14);
		cout << "\t\t\t3. Hall of Fame\n" << endl;
		SetConsoleTextAttribute(console, 12);
		cout << "\t\t\t0. Exit\n" << endl;
		SetConsoleTextAttribute(console, 7);
		cout << "\t\t\tYour choice   ";
		
		cin >> choise;
		if (choise == 0)
		{
			exit = true;
		}
		else if(choise == 1)
		{
			ComputerVsPlayer(computer, playerone);
		}
		else if (choise == 2)
		{
			PlayerVsPlayer(playerone, playertwo);
		}
		else if (choise == 3)
		{
			HallofFame();
		}
		else
		{
			SetConsoleTextAttribute(console, 12);
			cout << "\n\t\t\tWrong choice try again" << endl;
			cin.get();
			cin.get();
			SetConsoleTextAttribute(console, 7);			
		}
	}

	
	return 0;
}
