#include<iostream>
#include<Windows.h>
#include<ctime>
#include<string>
#include"FillArray.h"
#include"Location.h"
#include"Output.h"
#include"Fire.h"

using namespace std;


void ComputerVsPlayer(int computer[][10], int player[][10])
{
	string name;
	cout << "Enter your name" << endl;
	cin >> name;
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
			RandomLocation(player);
			RandomLocation(computer);
			Output(computer, player);
		}
		else if (placement == 2)
		{
			ManuallyLocation(player);
			RandomLocation(computer);
			Output(computer, player);
		}
	}

	bool exitBattle = false;
	
	int playerControl = 0;
	int computerControl = 0;

	while (exitBattle != true)
	{
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

		if (computerControl == 1 || playerControl == 1)
		{
			if (playerControl == 1)
			{
				system("cls");
				Output(computer, player);
				PlayerFire(computer);
			}

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
			system("cls");
			Output(computer, player);
			SetConsoleTextAttribute(console, 12);
			cout << "Fire of the enemy";
			SetConsoleTextAttribute(console, 7);
			Sleep(1000);

			if (computerControl == 1)
			{
				ComuterFire(player);
			}
		}

		
			
		if (computerControl != 1 || playerControl != 1)
		{
			exitBattle = true;			
		}

		
	}

	system("cls");
	Output(computer, player);
	
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


