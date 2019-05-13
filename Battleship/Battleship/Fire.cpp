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

int ComuterFire(int player[][10], int arrFire[][10])
{
	int Y = 0;
	int X = 0;
	int y = 0;
	int x = 0;
	int control = 0;

	bool exit = false;

	
	while (exit!=true)
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (arrFire[i][j] == 2)
				{
					control += 1;
					Y = i;
					X = j;
					y = i;
					x = j;

					if (arrFire[Y][X - 1] == 3 && arrFire[Y][X + 1] == 0)
					{
						X++;
					}
					else if (arrFire[Y + 1][X] == 3 && arrFire[Y-1][X] == 0)
					{
						Y--;
					}
					else if (arrFire[Y][X + 1] == 3 && arrFire[Y][X - 1] == 0)
					{
						X--;
					}
					else if (arrFire[Y - 1][X] == 3 && arrFire[Y+1][X] == 0)
					{
						Y++;
					}
					else
					{

					
					if (Y == 0)
					{
						if (Y == 0 && X == 0)
						{
							if (arrFire[Y+1][X] == 0)
							{
								Y++;
							}
							else if (arrFire[Y][X + 1] == 0)
							{
								X++;
							}
						}
						else if ((Y == 0) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5) || (X == 6) || (X == 7) || (X == 8))
						{
							if (arrFire[Y][X-1] == 0)
							{
								X--;
							}
							else if (arrFire[Y + 1][X] == 0)
							{
								Y++;
							}
							else if (arrFire[Y][X + 1] == 0)
							{
								X++;
							}
						}
						else if (Y == 0 && X == 9)
						{
							if (arrFire[Y][X - 1] == 0)
							{
								X++;
							}
							else if (arrFire[Y + 1][X] == 0)
							{
								Y++;
							}
						}
					}
					else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 9)
					{
						if (arrFire[Y][X - 1] == 0)
						{
							X--;
						}
						else if (arrFire[Y + 1][X] == 0)
						{
							Y++;
						}
						else if (arrFire[Y-1][X] == 0)
						{
							Y--;
						}
					}
					else if (Y == 9)
					{
						if (Y == 9 && X == 9)
						{
							if (arrFire[Y][X - 1] == 0)
							{
								X--;
							}							
							else if (arrFire[Y - 1][X] == 0)
							{
								Y--;
							}
						}
						else if ((Y == 9) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5) || (X == 6) || (X == 7) || (X == 8))
						{
							if (arrFire[Y][X - 1] == 0)
							{
								X--;
							}							
							else if (arrFire[Y][X + 1] == 0)
							{
								X++;
							}
							else if (arrFire[Y - 1][X] == 0)
							{
								Y--;
							}
						}
						else if (Y == 9 && X == 0)
						{
							
							if (arrFire[Y][X + 1] == 0)
							{
								X++;
							}
							else if (arrFire[Y - 1][X] == 0)
							{
								Y--;
							}
						}
					}
					else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 0)
					{
						if (arrFire[Y + 1][X] == 0)
						{
							Y++;
						}
						else if (arrFire[Y][X + 1] == 0)
						{
							X++;
						}
						else if (arrFire[Y - 1][X] == 0)
						{
							Y--;
						}
					}
					else
					{
						if (arrFire[Y][X - 1] == 0)
						{
							X--;
						}
						else if (arrFire[Y + 1][X] == 0)
						{
							Y++;
						}
						else if (arrFire[Y][X + 1] == 0)
						{
							X++;
						}
						else if (arrFire[Y - 1][X] == 0)
						{
							Y--;
						}
					}
					}
				}				
					
			}
		}

		if (control == 0)
		{	
			bool exitRand = false;
			
			while (exitRand == false)
			{
				Y = rand() % 10;
				X = rand() % 10;
				y = Y;
				x = X;
				if (arrFire[Y][X] == 0)
				{
					exitRand = true;
				}
			}			
		}

		

		if (arrFire[Y][X]==0)
		{
			exit = true;
			if (player[Y][X] == 1)
			{
				player[Y][X] = 4;
				arrFire[Y][X] = 2;
				arrFire[y][x] = 3;
				
				
				
				return true;
			}
			else
			{
				arrFire[Y][X] = 1;
				player[Y][X] = 3;
				
				return false;

			}			
		}
	}
}

int PlayerFire(int arr[][10])
{
	char XY[255];
	int Y = 0;
	int X = 0;

	cout << "Enter the coordinates of the fire point (Example A1)  ";
	cin >> XY;
	if (XY[0] >= 65 && XY[0] <= 74)
	{
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
			PlayerFire(arr);
		}
		else
		{
			Y = (int(XY[1]) - 49);
			X = (int(XY[0]) - 65);
		}
	}
	else
	{
		SetConsoleTextAttribute(console, 12);
		cout << "Impossible to fire";
		SetConsoleTextAttribute(console, 7);
		cin.get();
		cin.get();
		PlayerFire(arr);
	}
	if (XY[0] >= 65 && XY[0] <= 74)
	{
		if (arr[Y][X] == 1 || arr[Y][X] == 4)
		{
			arr[Y][X] = 4;
			return true;
		}
		else
		{
			arr[Y][X] = 3;
			return false;
		}
	}
}