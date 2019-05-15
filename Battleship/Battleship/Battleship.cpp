#include<iostream>
#include<Windows.h>
#include<ctime>
#include<string>
#include"FillArray.h"
#include"Location.h"
#include"Output.h"
#include"Fire.h"
#include "Control.h"
#include"HallofFame.h"
using namespace std;


void ComputerVsPlayer(int computer[][10], int player[][10])
{
	char compName[]="COMPUTER";
	char name[256];
	system("cls");
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console, 2);
	cout << "\n\n\n\n\n\n\n\t\t\t   Enter your name" << endl;
	cout << "\n\t\t\t\t";
	cin >> name;
	int placement;
	int arrFire[10][10];
	Fill(arrFire);
	int move = 0;
	

	bool exit = false;

	while (exit != true)
	{
		system("cls");
		SetConsoleTextAttribute(console, 2);
		cout << "\n\n\n\n\n\n\n\t\t\t    Ship placement?\n\t\t\t  1. Auto\n\t\t\t  2. Manually" << endl;
		cout << "\n\t\t\t\t";
		SetConsoleTextAttribute(console, 7);
		cin >> placement;
		if (placement == 1 || placement == 2)
		{
			exit = true;
		}
		else
		{
			SetConsoleTextAttribute(console, 12);
			cout << "\n\t\t\tWrong choice try again" << endl;
			SetConsoleTextAttribute(console, 7);
			cin.get();
			cin.get();
		}

		if (placement == 1)
		{
			RandomLocation(player);
			RandomLocation(computer);
			Output(computer, player, compName, name);
		}
		else if (placement == 2)
		{
			ManuallyLocation(player);
			RandomLocation(computer);
			Output(computer, player, compName, name);
		}
	}

	SetConsoleTextAttribute(console, 7);
	bool exitBattle = false;
	bool hit = true;

	int playerControl = 0;
	int computerControl = 0;


	system("cls");
	Output(computer, player, compName, name);

	while (exitBattle != true)
	{

		hit = true;
		while (hit == true)
		{
			hit = PlayerFire(computer);
			move++;

			Control(computer);

			system("cls");
			Output(computer, player, compName, name);

			playerControl = 0;
			computerControl = 0;

			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (computer[i][j] == 1)
					{
						computerControl = 1;
					}
					if (player[i][j] == 1)
					{
						playerControl = 1;
					}
				}
			}

			if (computerControl != 1 || playerControl != 1)
			{
				hit = false;
				exitBattle = true;
				continue;
			}
		}

		hit = true;

		while (hit == true)
		{
			system("cls");
			Output(computer, player, compName, name);
			SetConsoleTextAttribute(console, 12);
			cout << "Fire of the computer";
			SetConsoleTextAttribute(console, 7);
			Sleep(1000);

			hit = ComuterFire(player, arrFire);

			Control(player);

			system("cls");
			Output(computer, player, compName, name);

			playerControl = 0;
			computerControl = 0;

			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (computer[i][j] == 1)
					{
						computerControl = 1;
					}
					if (player[i][j] == 1)
					{
						playerControl = 1;
					}
				}
			}

			if (computerControl != 1 || playerControl != 1)
			{
				hit = false;
				exitBattle = true;
				continue;
			}
		}
	}

	system("cls");
	OutputFinal(computer, player, compName, name);

	if (computerControl > playerControl)
	{
		SetConsoleTextAttribute(console, 12);
		cout <<"Computer Win";
		SetConsoleTextAttribute(console, 7);
		cin.get();
		cin.get();
	}
	else if (playerControl > computerControl)
	{
		SetConsoleTextAttribute(console, 12);
		cout << "Player Win";
		SetConsoleTextAttribute(console, 7);
		cin.get();
		cin.get();
		if (move<=50)
		{
			char namecom[] = "Computer";
			WriteHallofFame(move, name, namecom);
		}
	}	
}

void PlayerVsPlayer(int playerone[][10], int playertwo[][10])
{
	char nameone[256], nametwo[256];
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");
	SetConsoleTextAttribute(console, 3);

	cout << "\n\n\n\n\n\n\n\t\t    Enter the name of the first player" << endl;
	cout << "\n\t\t\t\t";

	cin >> nameone;
	int placement;
	int moveOne = 0, moveTwo = 0;
	

	bool exit = false;

	while (exit != true)
	{
		system("cls");
		SetConsoleTextAttribute(console, 3);
		cout << "\n\n\n\n\n\n\n\t\t\t    Ship placement?\n\t\t\t  1. Auto\n\t\t\t  2. Manually" << endl;
		cout << "\n\t\t\t\t";
		
		cin >> placement;
		if (placement == 1 || placement == 2)
		{
			exit = true;
		}
		else
		{
			SetConsoleTextAttribute(console, 12);
			cout << "\n\t\t\tWrong choice try again" << endl;
			SetConsoleTextAttribute(console, 7);
			cin.get();
			cin.get();
		}

		if (placement == 1)
		{
			RandomLocation(playerone);
		}
		else if (placement == 2)
		{
			ManuallyLocation(playerone);
		}
	}
	exit = false;

	system("cls");
	SetConsoleTextAttribute(console, 3);

	cout << "\n\n\n\n\n\n\n\t\t    Enter the name of the second player" << endl;
	cout << "\n\t\t\t\t";

	
	cin >> nametwo;

	while (exit != true)
	{
		system("cls");
		SetConsoleTextAttribute(console, 3);
		cout << "\n\n\n\n\n\n\n\t\t\t    Ship placement?\n\t\t\t  1. Auto\n\t\t\t  2. Manually" << endl;
		cout << "\n\t\t\t\t";

		cin >> placement;
		if (placement == 1 || placement == 2)
		{
			exit = true;
		}
		else
		{
			SetConsoleTextAttribute(console, 12);
			cout << "\n\t\t\tWrong choice try again" << endl;
			SetConsoleTextAttribute(console, 7);
			cin.get();
			cin.get();
		}

		if (placement == 1)
		{
			RandomLocation(playertwo);
		}
		else if (placement == 2)
		{
			ManuallyLocation(playertwo);
		}
	}

	bool exitBattle = false;
	bool hit = true;

	int playerOneControl = 0;
	int playerTwoControl = 0;
	SetConsoleTextAttribute(console, 7);

	system("cls");
	OutputTwo(playerone, playertwo, nameone, nametwo);

	while (exitBattle != true)
	{
	
		hit = true;
		while (hit == true)
		{
			SetConsoleTextAttribute(console, 14);
			cout << "Fire player " << nameone << endl;
			SetConsoleTextAttribute(console, 7);

			hit = PlayerFire(playertwo);
			moveOne++;
			Control(playertwo);
			
			system("cls");
			OutputTwo(playerone, playertwo, nameone, nametwo);
				
			playerOneControl = 0;
			playerTwoControl = 0;
			
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (playerone[i][j] == 1)
					{
						playerOneControl = 1;
					}
					if (playertwo[i][j] == 1)
					{
						playerTwoControl = 1;
					}
				}
			}
			
			if (playerOneControl != 1 || playerTwoControl != 1)
			{
				hit = false;
				exitBattle = true;
				continue;
			}
		}
					
		hit = true;
		
		while (hit == true)
		{
			SetConsoleTextAttribute(console, 2);
			cout << "Fire player " << nametwo << endl;
			SetConsoleTextAttribute(console, 7);
		
			hit = PlayerFire(playerone);
			moveTwo++;
			Control(playerone);
			
			system("cls");
			OutputTwo(playerone, playertwo, nameone, nametwo);
			
			playerOneControl = 0;
			playerTwoControl = 0;

			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (playerone[i][j] == 1)
					{
						playerOneControl = 1;
					}
					if (playertwo[i][j] == 1)
					{
						playerTwoControl = 1;
					}
				}
			}
			
			if (playerOneControl != 1 || playerTwoControl != 1)
			{
				hit = false;
				exitBattle = true;
				continue;
			}
		}				
	}

	system("cls");
	OutputFinal(playerone, playertwo, nameone, nametwo);

	if (playerOneControl > playerTwoControl)
	{
		SetConsoleTextAttribute(console, 12);
		cout << nameone <<" Win";
		SetConsoleTextAttribute(console, 7);
		cin.get();
		cin.get();
		if (moveOne <= 50)
		{
			WriteHallofFame(moveOne, nameone, nametwo);
		}
	}
	else if (playerOneControl < playerTwoControl)
	{
		SetConsoleTextAttribute(console, 12);
		cout <<nametwo<< " Win";
		SetConsoleTextAttribute(console, 7);
		cin.get();
		cin.get();
		if (moveTwo <= 50)
		{
			WriteHallofFame(moveTwo, nametwo, nameone);
		}
	}
}
