#include<iostream>
#include<Windows.h>
#include<ctime>
#include<string>
#include"FillArray.h"

using namespace std;

void ManuallyLocation(int arr[][10])
{
	int location = 0;
	int Y = 0;
	int X = 0;
	char tmpXY[255];
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 0; i < 10; i++)
	{
		system("cls");
		cout << "   ";
		for (int i = 65; i < 75; i++)
		{
			cout << char(i) << "  ";
		}
		cout << endl;

		for (int i = 0; i < 10; i++)
		{
			if (i < 9)
			{
				cout << i + 1 << "  ";
			}
			else
			{
				cout << i + 1 << " ";
			}

			for (int j = 0; j < 10; j++)
			{
				if (arr[i][j] == 0)
				{
					SetConsoleTextAttribute(console, 9);
					cout << "=";
					SetConsoleTextAttribute(console, 7);
				}
				else if (arr[i][j] == 1)
				{
					SetConsoleTextAttribute(console, 2);
					cout << "X";
					SetConsoleTextAttribute(console, 7);
				}
				else if (arr[i][j] == 2)
				{
					SetConsoleTextAttribute(console, 14);
					cout << "*";
					SetConsoleTextAttribute(console, 7);
				}
				cout << "  ";
			}
			cout << endl;
			cout << endl;
		}

		if (i == 0)
		{
			cout << "Slect ship location\n0. XXXX\n1.X\n  X\n  X\n  X" << endl;
			cin >> location;
		}
		if (i == 1 || i == 2)
		{
			cout << "Slect ship location\n0. XXX\n1.X\n  X\n  X" << endl;
			cin >> location;
		}
		if (i == 3 || i == 4 || i == 5)
		{
			cout << "Slect ship location\n0. XX\n1.X\n  X" << endl;
			cin >> location;
		}
		if (i == 6 || i == 7 || i == 8 || i == 9)
		{
			location=0;
		}

		if (location == 0)
		{
			
			if (i == 6 || i == 7 || i == 8 || i == 9)
			{
				cout << "Enter the starting point coordinates for the X ship (Example A1)  ";
				cin >> tmpXY;
			}
			else 
			{
				cout << "Enter the coordinates of the starting point (Example A1)  ";
				cin >> tmpXY;
			}
			

			if (int(tmpXY[1]) == 49 && int(tmpXY[2]) == 48)
			{
				Y = 9;
				X = (int(tmpXY[0]) - 65);
			}
			else if  (tmpXY[2] != '\0')
			{
				i--;
				SetConsoleTextAttribute(console, 12);
				cout << "It is impossible to place a ship";
				SetConsoleTextAttribute(console, 7);
				cin.get();
				cin.get();
				continue;
			}
			else
			{				
				Y = (int(tmpXY[1]) - 49);
				X = (int(tmpXY[0]) - 65);
			}
						
			if (i == 0)
			{
				if ((X < 0) || (X > 6)|| (Y < 0) || (Y > 9))
				{
					i--;
					
					SetConsoleTextAttribute(console, 12);
					cout << "It is impossible to place a ship";
					SetConsoleTextAttribute(console, 7);
					cin.get();
					cin.get();
					continue;
					
				}
				else
				{
					FillHorizontallyFour(arr, Y, X);
				}
			}
			if (i == 1 || i == 2)
			{
				if ((X == 8) || (X == 9) || (arr[Y][X] == 2) || (arr[Y][X + 1] == 2) || (arr[Y][X + 2] == 2) || (arr[Y][X] == 1) || (arr[Y][X + 1] == 1) || (arr[Y][X + 2] == 1) || (arr[Y][X] != 0))
				{
					i--;
					SetConsoleTextAttribute(console, 12);
					cout << "It is impossible to place a ship";
					SetConsoleTextAttribute(console, 7);
					cin.get();
					cin.get();
					continue;
				}
				else
				{
					FillHorizontallyThree(arr, Y, X);
				}

			}
			if (i == 3 || i == 4 || i == 5)
			{
				if ((X == 9) || (arr[Y][X] == 2) || (arr[Y][X + 1] == 2) || (arr[Y][X] == 1) || (arr[Y][X + 1] == 1) || (arr[Y][X] != 0))
				{
					i--;
					SetConsoleTextAttribute(console, 12);
					cout << "It is impossible to place a ship";
					SetConsoleTextAttribute(console, 7);
					cin.get();
					cin.get();
					continue;
				}
				else
				{
					FillHorizontallyTwo(arr, Y, X);
				}
			}
			if (i == 6 || i == 7 || i == 8 || i == 9)
			{
				if ((arr[Y][X] == 2) || (arr[Y][X] == 1) || (arr[Y][X] != 0))
				{
					i--;
					SetConsoleTextAttribute(console, 12);
					cout << "It is impossible to place a ship";
					SetConsoleTextAttribute(console, 7);
					cin.get();
					cin.get();
					continue;
				}
				else
				{
					FillHorizontallyOne(arr, Y, X);
				}
			}
		}
		if (location == 1)
		{
		
			cout << "Enter the coordinates of the starting point (Example A1)  ";
			cin >> tmpXY;

			if (int(tmpXY[1]) == 49 && int(tmpXY[2]) == 48)
			{
				Y = 9;
				X = (int(tmpXY[0]) - 65);
			}
			else if (tmpXY[2] != '\0')
			{
				i--;
				SetConsoleTextAttribute(console, 12);
				cout << "It is impossible to place a ship";
				SetConsoleTextAttribute(console, 7);
				cin.get();
				cin.get();
				continue;
			}
			else
			{
				Y = (int(tmpXY[1]) - 49);
				X = (int(tmpXY[0]) - 65);
			}
			if (i == 0)
			{
				if ((Y == 7) || (Y == 8) || (Y == 9))
				{
					i--;
					SetConsoleTextAttribute(console, 12);
					cout << "It is impossible to place a ship";
					SetConsoleTextAttribute(console, 7);
					cin.get();
					cin.get();
					continue;
				}
				else
				{
					FillVerticallyFour(arr, Y, X);
				}
			}
			if (i == 1 || i == 2)
			{
				if ((Y == 8) || (Y == 9) || (arr[Y][X] == 2) || (arr[Y + 1][X] == 2) || (arr[Y + 2][X] == 2) || (arr[Y][X] == 1) || (arr[Y + 1][X] == 1) || (arr[Y + 2][X] == 1) || (arr[Y][X] != 0))
				{
					i--;
					SetConsoleTextAttribute(console, 12);
					cout << "It is impossible to place a ship";
					SetConsoleTextAttribute(console, 7);
					cin.get();
					cin.get();
					continue;
				}
				else
				{
					FillVerticallyThree(arr, Y, X);
				}

			}
			if (i == 3 || i == 4 || i == 5)
			{
				if ((Y == 9) || (arr[Y][X] == 2) || (arr[Y + 1][X] == 2) || (arr[Y][X] == 1) || (arr[Y + 1][X] == 1) || (arr[Y][X] != 0))
				{
					i--;
					SetConsoleTextAttribute(console, 12);
					cout << "It is impossible to place a ship";
					SetConsoleTextAttribute(console, 7);
					cin.get();
					cin.get();
					continue;
				}
				else
				{
					FillVerticallyTwo(arr, Y, X);
				}
			}
			
		}
		system("cls");
	}
	system("cls");
}

void RandomLocation(int sourseArr[][10])
{
	int arr[10][10];
	Fill(arr);
	int location = 0;
	int Y = 0;
	int X = 0;

	for (int i = 0; i < 10; i++)
	{
		location = rand() % 2;

		if (location == 0)
		{
			Y = rand() % 10;
			X = rand() % 10;

			if (i == 0)
			{
				if ((X == 7) || (X == 8) || (X == 9))
				{
					i--;

					continue;
				}
				else
				{
					FillHorizontallyFour(arr, Y, X);
				}
			}
			if (i == 1 || i == 2)
			{
				if ((X == 8) || (X == 9) || (arr[Y][X] == 2) || (arr[Y][X + 1] == 2) || (arr[Y][X + 2] == 2) || (arr[Y][X] == 1) || (arr[Y][X + 1] == 1) || (arr[Y][X + 2] == 1) || (arr[Y][X] != 0))
				{
					i--;
					continue;
				}
				else
				{
					FillHorizontallyThree(arr, Y, X);
				}

			}
			if (i == 3 || i == 4 || i == 5)
			{
				if ((X == 9) || (arr[Y][X] == 2) || (arr[Y][X + 1] == 2) || (arr[Y][X] == 1) || (arr[Y][X + 1] == 1) || (arr[Y][X] != 0))
				{
					i--;
					continue;
				}
				else
				{
					FillHorizontallyTwo(arr, Y, X);
				}
			}
			if (i == 6 || i == 7 || i == 8 || i == 9)
			{
				if ((arr[Y][X] == 2) || (arr[Y][X] == 1) || (arr[Y][X] != 0))
				{
					i--;
					continue;
				}
				else
				{
					FillHorizontallyOne(arr, Y, X);
				}
			}
		}
		if (location == 1)
		{
			Y = rand() % 10;
			X = rand() % 10;

			if (i == 0)
			{
				if ((Y == 7) || (Y == 8) || (Y == 9))
				{
					i--;

					continue;
				}
				else
				{
					FillVerticallyFour(arr, Y, X);
				}
			}
			if (i == 1 || i == 2)
			{
				if ((Y == 8) || (Y == 9) || (arr[Y][X] == 2) || (arr[Y + 1][X] == 2) || (arr[Y + 2][X] == 2) || (arr[Y][X] == 1) || (arr[Y + 1][X] == 1) || (arr[Y + 2][X] == 1) || (arr[Y][X] != 0))
				{
					i--;
					continue;
				}
				else
				{
					FillVerticallyThree(arr, Y, X);
				}

			}
			if (i == 3 || i == 4 || i == 5)
			{
				if ((Y == 9) || (arr[Y][X] == 2) || (arr[Y + 1][X] == 2) || (arr[Y][X] == 1) || (arr[Y + 1][X] == 1) || (arr[Y][X] != 0))
				{
					i--;
					continue;
				}
				else
				{
					FillVerticallyTwo(arr, Y, X);
				}
			}
			if (i == 6 || i == 7 || i == 8 || i == 9)
			{
				if ((arr[Y][X] == 2) || (arr[Y][X] == 1) || (arr[Y][X] != 0))
				{
					i--;
					continue;
				}
				else
				{
					FillVerticallyOne(arr, Y, X);
				}
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			sourseArr[i][j]= arr[i][j];
		}
	}
}
