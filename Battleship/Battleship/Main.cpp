#include<iostream>
#include<Windows.h>
#include<ctime>
#include<string>
#include"FillArray.h"
#include"Location.h"
#include"Output.h"
#include"Battleship.h"
#include"Fire.h"
#include"Ñontrol.h"

using namespace std;

int main()
{
	system("mode con cols=80 lines=30");

	srand(unsigned(time(NULL)));

	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

	int computer[10][10];
	//int playerone[10][10];
	//int playertwo[10][10];

	//int choise = 0;
	//bool exit = false;

	//while (exit!=true)
	//{
	//	system("cls");
	//	SetConsoleTextAttribute(console, 2);
	//	cout << "1. Computer VS Player\n" << endl;
	//	SetConsoleTextAttribute(console, 3);
	//	cout << "2. Player VS Player\n" << endl;
	//	SetConsoleTextAttribute(console, 14);
	//	cout << "3. Hall of Fame\n" << endl;
	//	SetConsoleTextAttribute(console, 12);
	//	cout << "0. Exit\n" << endl;
	//	SetConsoleTextAttribute(console, 7);
	//	cout << "Your choice   ";
	//	
	//	cin >> choise;
	//	if (choise == 0)
	//	{
	//		exit = true;
	//	}
	//	else if(choise == 1)
	//	{
	//		ComputerVsPlayer(computer, playerone);
	//	}
	//	else if (choise == 2)
	//	{
	//		PlayerVsPlayer(playerone, playertwo);
	//	}
	//	else if (choise == 3)
	//	{
	//		//HallofFame
	//	}
	//	else
	//	{
	//		SetConsoleTextAttribute(console, 12);
	//		cout << "Wrong choice try again" << endl;
	//		SetConsoleTextAttribute(console, 7);			
	//	}
	//}
	int computerControl = 0;
	char a[256] = "a", b[256] = "b";
	int arrFire[10][10];
	Fill(arrFire);
	Fill(computer);
	RandomLocation(computer);
	
	


	bool hit = true;
	while (hit == true)
	{
		system("cls");
		Output(arrFire, computer, a, b);
		ComuterFire(computer, arrFire);
		cin.get();

		Control(computer);

		system("cls");
		Output(arrFire, computer, a, b);

		computerControl = 0;

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (computer[i][j] == 1)
				{
					computerControl = 1;
				}				
			}
		}

		if (computerControl != 1 )
		{
			hit = false;			
			continue;
		}
	}

	return 0;
}
