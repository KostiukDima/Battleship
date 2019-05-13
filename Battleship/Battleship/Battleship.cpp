#include<iostream>
#include<Windows.h>
#include<ctime>
#include<string>
#include"FillArray.h"
#include"Location.h"
#include"Output.h"
#include"Fire.h"
#include "Ñontrol.h"

using namespace std;


void ComputerVsPlayer(int computer[][10], int player[][10])
{
	char compName[]="COMPUTER";
	char name[256];
	cout << "Enter your name" << endl;
	cin >> name;
	int placement;
	int arrFire[10][10];
	Fill(arrFire);

	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

	bool exit = false;

	while (exit != true)
	{
		cout << "Ship placement?\n1. Auto\n2. Manually" << endl;
		cin >> placement;
		if (placement == 1 || placement == 2)
		{
			exit = true;
		}
		else
		{
			cout << "Wrong choice try again" << endl;
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
		cout << "Computer Win";
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
	}	
}

void PlayerVsPlayer(int playerone[][10], int playertwo[][10])
{
	char nameone[256], nametwo[256];
	cout << "Enter the name of the first player" << endl;
	cin >> nameone;
	int placement;

	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

	bool exit = false;

	while (exit != true)
	{
		cout << "Ship placement?\n1. Auto\n2. Manually" << endl;
		cin >> placement;
		if (placement == 1 || placement == 2)
		{
			exit = true;
		}
		else
		{
			cout << "Wrong choice try again" << endl;
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

	cout << "Enter the name of the second player" << endl;
	cin >> nametwo;

	while (exit != true)
	{
		cout << "Ship placement?\n1. Auto\n2. Manually" << endl;
		cin >> placement;
		if (placement == 1 || placement == 2)
		{
			exit = true;
		}
		else
		{
			cout << "Wrong choice try again" << endl;
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
	}
	else if (playerOneControl < playerTwoControl)
	{
		SetConsoleTextAttribute(console, 12);
		cout <<nametwo<< " Win";
		SetConsoleTextAttribute(console, 7);
		cin.get();
		cin.get();
	}
}
