#include<iostream>
#include<Windows.h>
#include<ctime>
#include<string>
#include"FillArray.h"
#include"Location.h"
#include"Output.h"
#include"Fire.h"

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

void ComuterFire(int player[][10])
{
	int arrFire[10][10];
	Fill(arrFire);
	   
	int Y = 0;
	int X = 0;

	bool exit = false;



	while (exit!=true)
	{
		Y = rand() % 10;
		X = rand() % 10;

		if (arrFire[Y][X]==0)
		{
			arrFire[Y][X] = 1;
			if (player[Y][X] == 1 || player[Y][X] == 4)
			{
				player[Y][X] = 4;
			}
			else
			{
				player[Y][X] = 3;
			}
			
			exit = true;
		}
	}
}

void PlayerFire(int computer[][10])
{
	char XY[255];
	int Y = 0;
	int X = 0;

	cout << "Enter the coordinates of the fire point (Example A1)  ";
	cin >> XY;

	if (int(XY[1]) == 49 && int(XY[2]) == 48)
	{
		Y = 9;
		X = (int(XY[0]) - 65);
	}
	else if (XY[2] != '\0')
	{
		SetConsoleTextAttribute(console, 12);
		cout << "Impossible to fire";
		SetConsoleTextAttribute(console, 7);
		cin.get();
		cin.get();
		PlayerFire(computer);
	}
	else
	{
		Y = (int(XY[1]) - 49);
		X = (int(XY[0]) - 65);
	}
	
	if (computer[Y][X]==1|| computer[Y][X] == 4)
	{
		computer[Y][X] = 4;
	}
	else
	{
		computer[Y][X] = 3;
	}
}
