#include<iostream>
#include<Windows.h>
#include<ctime>
#include <stdio.h>
using namespace std;

void Fill(int arr[][10]);
void Output(int arrOne[][10], int arrTwo[][10]);
void RandomLocation(int arr[][10]);
void FillHorizontallyFour(int arr[][10], int Y, int X);
void FillHorizontallyThree(int arr[][10], int Y, int X);
void FillHorizontallyTwo(int arr[][10], int Y, int X);
void FillHorizontallyOne(int arr[][10], int Y, int X);
void FillVerticallyFour(int arr[][10], int Y, int X);
void FillVerticallyThree(int arr[][10], int Y, int X);
void FillVerticallyTwo(int arr[][10], int Y, int X);
void FillVerticallyOne(int arr[][10], int Y, int X);

int main()
{
	srand(unsigned(time(NULL)));

	int Computer[10][10];



	Fill(Computer);

	RandomLocation(Computer);

	Output(Computer, Computer);

	system("pause");
	return 0;
}

void Fill(int arr[][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[i][j] = 0;
		}
	}
}

void Output(int arrOne[][10], int arrTwo[][10])
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	
	cout << "\t    COMPUTER\t\t\t\tPLAYER" << endl;

	cout << "   ";
	
	for (int i = 65; i < 75; i++)
	{
		cout << char(i) << "  " ;
	}
	cout << "     ";
	for (int i = 65; i < 75; i++)
	{
		cout << char(i) << "  ";
	}
	cout << endl;
	
	for (int i = 0; i < 10; i++)
	{
		if (i<9)
		{
			cout << i+1 << "  ";
		}
		else
		{
			cout << i+1 << " ";
		}
		
		
		for (int j = 0; j < 10; j++)
		{
			if (arrOne[i][j] == 0)
			{
				SetConsoleTextAttribute(console, 9);
				cout << "=";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrOne[i][j] == 1)
			{
				SetConsoleTextAttribute(console, 9);
				cout << "=";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrOne[i][j] == 2)
			{
				SetConsoleTextAttribute(console, 9);
				cout << "=";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrOne[i][j] == 3)
			{
				SetConsoleTextAttribute(console, 7);
				cout << "*";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrOne[i][j] == 4)
			{
				SetConsoleTextAttribute(console, 12);
				cout << "X";
				SetConsoleTextAttribute(console, 7);
			}

			cout << "  ";
		}

		cout << "  ";
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
			if (arrOne[i][j] == 0)
			{
				SetConsoleTextAttribute(console, 9);
				cout << "=";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrOne[i][j] == 1)
			{
				SetConsoleTextAttribute(console, 2);
				cout << "X";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrOne[i][j] == 2)
			{
				SetConsoleTextAttribute(console, 9);
				cout << "=";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrOne[i][j] == 3)
			{
				SetConsoleTextAttribute(console, 7);
				cout << "*";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrOne[i][j] == 4)
			{
				SetConsoleTextAttribute(console, 12);
				cout << "X";
				SetConsoleTextAttribute(console, 7);
			}
			cout << "  ";
		}
		cout << endl;
		cout << endl;
	}


}

void RandomLocation(int arr[][10])
{
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
}

void FillHorizontallyFour(int arr[][10], int Y, int X)
{
	if (Y == 0)
	{
		if (Y == 0 && X == 0)
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X + 4] = 2;
			for (int i = 0; i < 5; i++)
			{
				arr[Y + 1][X + i] = 2;
			}
		}
		else if ((Y == 0) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5))
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X - 1] = 2;
			arr[Y][X + 4] = 2;
			for (int i = -1; i < 5; i++)
			{
				arr[Y + 1][X + (i)] = 2;
			}
		}
		else if (Y == 0 && X == 6)
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X - 1] = 2;
			for (int i = -1; i < 4; i++)
			{
				arr[Y + 1][X + (i)] = 2;
			}
		}
	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 6)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[Y][X + i] = 1;
		}
		arr[Y][X - 1] = 2;
		for (int i = -1; i < 4; i++)
		{
			arr[Y + 1][X + (i)] = 2;
		}
		for (int i = -1; i < 4; i++)
		{
			arr[Y - 1][X + (i)] = 2;
		}
	}
	else if (Y == 9)
	{
		if (Y == 9 && X == 6)
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X - 1] = 2;
			for (int i = -1; i < 4; i++)
			{
				arr[Y - 1][X + (i)] = 2;
			}
		}
		else if ((Y == 9) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5))
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X - 1] = 2;
			arr[Y][X + 4] = 2;
			for (int i = -1; i < 5; i++)
			{
				arr[Y - 1][X + (i)] = 2;
			}
		}
		else if (Y == 9 && X == 0)
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X + 4] = 2;
			for (int i = 0; i < 5; i++)
			{
				arr[Y - 1][X + i] = 2;
			}
		}
	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 0)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[Y][X + i] = 1;
		}
		arr[Y][X + 4] = 2;
		for (int i = 0; i < 5; i++)
		{
			arr[Y + 1][X + i] = 2;
		}
		for (int i = 0; i < 5; i++)
		{
			arr[Y - 1][X + i] = 2;
		}
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			arr[Y][X + i] = 1;
		}
		arr[Y][X - 1] = 2;
		arr[Y][X + 4] = 2;
		for (int i = -1; i < 5; i++)
		{
			arr[Y + 1][X + (i)] = 2;
		}
		for (int i = -1; i < 5; i++)
		{
			arr[Y - 1][X + (i)] = 2;
		}
	}
}

void FillHorizontallyThree(int arr[][10], int Y, int X)
{
	if (Y == 0)
	{
		if (Y == 0 && X == 0)
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X + 3] = 2;
			for (int i = 0; i < 4; i++)
			{
				arr[Y + 1][X + i] = 2;
			}
		}
		else if ((Y == 0) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5) || (X == 6))
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X - 1] = 2;
			arr[Y][X + 3] = 2;
			for (int i = -1; i < 4; i++)
			{
				arr[Y + 1][X + (i)] = 2;
			}
		}
		else if (Y == 0 && X == 7)
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X - 1] = 2;
			for (int i = -1; i < 3; i++)
			{
				arr[Y + 1][X + (i)] = 2;
			}
		}
	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 7)
	{
		for (int i = 0; i < 3; i++)
		{
			arr[Y][X + i] = 1;
		}
		arr[Y][X - 1] = 2;
		for (int i = -1; i < 3; i++)
		{
			arr[Y + 1][X + (i)] = 2;
		}
		for (int i = -1; i < 3; i++)
		{
			arr[Y - 1][X + (i)] = 2;
		}
	}
	else if (Y == 9)
	{
		if (Y == 9 && X == 7)
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X - 1] = 2;
			for (int i = -1; i < 3; i++)
			{
				arr[Y - 1][X + (i)] = 2;
			}
		}
		else if ((Y == 9) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5) || (X == 6))
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X - 1] = 2;
			arr[Y][X + 3] = 2;
			for (int i = -1; i < 4; i++)
			{
				arr[Y - 1][X + (i)] = 2;
			}
		}
		else if (Y == 9 && X == 0)
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X + 3] = 2;
			for (int i = 0; i < 4; i++)
			{
				arr[Y - 1][X + i] = 2;
			}
		}
	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 0)
	{
		for (int i = 0; i < 3; i++)
		{
			arr[Y][X + i] = 1;
		}
		arr[Y][X + 3] = 2;
		for (int i = 0; i < 4; i++)
		{
			arr[Y + 1][X + i] = 2;
		}
		for (int i = 0; i < 4; i++)
		{
			arr[Y - 1][X + i] = 2;
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			arr[Y][X + i] = 1;
		}
		arr[Y][X - 1] = 2;
		arr[Y][X + 3] = 2;
		for (int i = -1; i < 4; i++)
		{
			arr[Y + 1][X + (i)] = 2;
		}
		for (int i = -1; i < 4; i++)
		{
			arr[Y - 1][X + (i)] = 2;
		}
	}
}

void FillHorizontallyTwo(int arr[][10], int Y, int X)
{
	if (Y == 0)
	{
		if (Y == 0 && X == 0)
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X + 2] = 2;
			for (int i = 0; i < 3; i++)
			{
				arr[Y + 1][X + i] = 2;
			}
		}
		else if ((Y == 0) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5) || (X == 6) || (X == 7))
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X - 1] = 2;
			arr[Y][X + 2] = 2;
			for (int i = -1; i < 3; i++)
			{
				arr[Y + 1][X + (i)] = 2;
			}
		}
		else if (Y == 0 && X == 8)
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X - 1] = 2;
			for (int i = -1; i < 2; i++)
			{
				arr[Y + 1][X + (i)] = 2;
			}
		}

	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 8)
	{
		for (int i = 0; i < 2; i++)
		{
			arr[Y][X + i] = 1;
		}
		arr[Y][X - 1] = 2;
		for (int i = -1; i < 2; i++)
		{
			arr[Y + 1][X + (i)] = 2;
		}
		for (int i = -1; i < 2; i++)
		{
			arr[Y - 1][X + (i)] = 2;
		}
	}
	else if (Y == 9)
	{
		if (Y == 9 && X == 8)
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X - 1] = 2;
			for (int i = -1; i < 2; i++)
			{
				arr[Y - 1][X + (i)] = 2;
			}
		}
		else if ((Y == 9) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5) || (X == 6) || (X == 7))
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X - 1] = 2;
			arr[Y][X + 2] = 2;
			for (int i = -1; i < 3; i++)
			{
				arr[Y - 1][X + (i)] = 2;
			}
		}
		else if (Y == 9 && X == 0)
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y][X + i] = 1;
			}
			arr[Y][X + 2] = 2;
			for (int i = 0; i < 3; i++)
			{
				arr[Y - 1][X + i] = 2;
			}
		}
	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 0)
	{
		for (int i = 0; i < 2; i++)
		{
			arr[Y][X + i] = 1;
		}
		arr[Y][X + 2] = 2;
		for (int i = 0; i < 3; i++)
		{
			arr[Y + 1][X + i] = 2;
		}
		for (int i = 0; i < 3; i++)
		{
			arr[Y - 1][X + i] = 2;
		}
	}
	else
	{
		for (int i = 0; i < 2; i++)
		{
			arr[Y][X + i] = 1;
		}
		arr[Y][X - 1] = 2;
		arr[Y][X + 2] = 2;
		for (int i = -1; i < 3; i++)
		{
			arr[Y + 1][X + (i)] = 2;
		}
		for (int i = -1; i < 3; i++)
		{
			arr[Y - 1][X + (i)] = 2;
		}
	}
}

void FillHorizontallyOne(int arr[][10], int Y, int X)
{
	if (Y == 0)
	{
		if (Y == 0 && X == 0)
		{
			arr[Y][X] = 1;
			arr[Y][X + 1] = 2;
			for (int i = 0; i < 2; i++)
			{
				arr[Y + 1][X + i] = 2;
			}
		}
		else if ((Y == 0) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5) || (X == 6) || (X == 7) || (X == 8))
		{
			arr[Y][X] = 1;
			arr[Y][X - 1] = 2;
			arr[Y][X + 1] = 2;
			for (int i = -1; i < 2; i++)
			{
				arr[Y + 1][X + (i)] = 2;
			}
		}
		else if (Y == 0 && X == 9)
		{
			arr[Y][X] = 1;
			arr[Y][X - 1] = 2;
			for (int i = -1; i < 1; i++)
			{
				arr[Y + 1][X + (i)] = 2;
			}
		}
	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 9)
	{
		arr[Y][X] = 1;
		arr[Y][X - 1] = 2;
		for (int i = -1; i < 1; i++)
		{
			arr[Y + 1][X + (i)] = 2;
		}
		for (int i = -1; i < 1; i++)
		{
			arr[Y - 1][X + (i)] = 2;
		}
	}
	else if (Y == 9)
	{
		if (Y == 9 && X == 9)
		{
			arr[Y][X] = 1;
			arr[Y][X - 1] = 2;
			for (int i = -1; i < 1; i++)
			{
				arr[Y - 1][X + (i)] = 2;
			}
		}
		else if ((Y == 9) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5) || (X == 6) || (X == 7) || (X == 8))
		{
			arr[Y][X] = 1;
			arr[Y][X - 1] = 2;
			arr[Y][X + 1] = 2;
			for (int i = -1; i < 2; i++)
			{
				arr[Y - 1][X + (i)] = 2;
			}
		}
		else if (Y == 9 && X == 0)
		{
			arr[Y][X] = 1;
			arr[Y][X + 1] = 2;
			for (int i = 0; i < 2; i++)
			{
				arr[Y - 1][X + i] = 2;
			}
		}
	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 0)
	{
		arr[Y][X] = 1;
		arr[Y][X + 1] = 2;
		for (int i = 0; i < 2; i++)
		{
			arr[Y + 1][X + i] = 2;
		}
		for (int i = 0; i < 2; i++)
		{
			arr[Y - 1][X + i] = 2;
		}
	}
	else
	{
		arr[Y][X] = 1;
		arr[Y][X - 1] = 2;
		arr[Y][X + 1] = 2;
		for (int i = -1; i < 2; i++)
		{
			arr[Y + 1][X + (i)] = 2;
		}
		for (int i = -1; i < 2; i++)
		{
			arr[Y - 1][X + (i)] = 2;
		}
	}
}

void FillVerticallyFour(int arr[][10], int Y, int X)
{

	if (X == 0)
	{
		if (Y == 0 && X == 0)
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y + 4][X] = 2;
			for (int i = 0; i < 5; i++)
			{
				arr[Y + i][X + 1] = 2;
			}
		}
		else if ((X == 0) && (Y == 1) || (Y == 2) || (Y == 3) || (Y == 4) || (Y == 5))
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y - 1][X] = 2;
			arr[Y + 4][X] = 2;
			for (int i = -1; i < 5; i++)
			{
				arr[Y + (i)][X + 1] = 2;
			}
		}
		else if (Y == 6 && X == 0)
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y - 1][X] = 2;
			for (int i = -1; i < 4; i++)
			{
				arr[Y + (i)][X + 1] = 2;
			}
		}
	}
	else if ((X == 1 || X == 2 || X == 3 || X == 4 || X == 5 || X == 6 || X == 7 || X == 8) && Y == 6)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[Y + i][X] = 1;
		}
		arr[Y - 1][X] = 2;
		for (int i = -1; i < 4; i++)
		{
			arr[Y + (i)][X + 1] = 2;
		}
		for (int i = -1; i < 4; i++)
		{
			arr[Y + (i)][X - 1] = 2;
		}
	}
	else if (X == 9)
	{
		if (X == 9 && Y == 6)
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y - 1][X] = 2;
			for (int i = -1; i < 4; i++)
			{
				arr[Y + (i)][X - 1] = 2;
			}
		}
		else if ((X == 9) && (Y == 1) || (Y == 2) || (Y == 3) || (Y == 4) || (Y == 5))
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y - 1][X] = 2;
			arr[Y + 4][X] = 2;
			for (int i = -1; i < 5; i++)
			{
				arr[Y + (i)][X - 1] = 2;
			}
		}
		else if (X == 9 && Y == 0)
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y + 4][X] = 2;
			for (int i = 0; i < 5; i++)
			{
				arr[Y + i][X - 1] = 2;
			}
		}
	}
	else if ((X == 1 || X == 2 || X == 3 || X == 4 || X == 5 || X == 6 || X == 7 || X == 8) && Y == 0)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[Y + i][X] = 1;
		}
		arr[Y + 4][X] = 2;
		for (int i = 0; i < 5; i++)
		{
			arr[Y + i][X + 1] = 2;
		}
		for (int i = 0; i < 5; i++)
		{
			arr[Y + i][X - 1] = 2;
		}
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			arr[Y + i][X] = 1;
		}
		arr[Y - 1][X] = 2;
		arr[Y + 4][X] = 2;
		for (int i = -1; i < 5; i++)
		{
			arr[Y + (i)][X + 1] = 2;
		}
		for (int i = -1; i < 5; i++)
		{
			arr[Y + (i)][X - 1] = 2;
		}
	}
}

void FillVerticallyThree(int arr[][10], int Y, int X)
{
	if (X == 0)
	{
		if (Y == 0 && X == 0)
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y + 3][X] = 2;
			for (int i = 0; i < 4; i++)
			{
				arr[Y + i][X + 1] = 2;
			}
		}
		else if ((X == 0) && (Y == 1) || (Y == 2) || (Y == 3) || (Y == 4) || (Y == 5) || (Y == 6))
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y - 1][X] = 2;
			arr[Y + 3][X] = 2;
			for (int i = -1; i < 4; i++)
			{
				arr[Y + (i)][X + 1] = 2;
			}
		}
		else if (X == 0 && Y == 7)
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y - 1][X] = 2;
			for (int i = -1; i < 3; i++)
			{
				arr[Y + (i)][X + 1] = 2;
			}
		}
	}
	else if ((X == 1 || X == 2 || X == 3 || X == 4 || X == 5 || X == 6 || X == 7 || X == 8) && Y == 7)
	{
		for (int i = 0; i < 3; i++)
		{
			arr[Y + i][X] = 1;
		}
		arr[Y - 1][X] = 2;
		for (int i = -1; i < 3; i++)
		{
			arr[Y + (i)][X + 1] = 2;
		}
		for (int i = -1; i < 3; i++)
		{
			arr[Y + (i)][X - 1] = 2;
		}
	}
	else if (X == 9)
	{
		if (X == 9 && Y == 7)
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y - 1][X] = 2;
			for (int i = -1; i < 3; i++)
			{
				arr[Y + (i)][X - 1] = 2;
			}
		}
		else if ((X == 9) && (Y == 1) || (Y == 2) || (Y == 3) || (Y == 4) || (Y == 5) || (Y == 6))
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y - 1][X] = 2;
			arr[Y + 3][X] = 2;
			for (int i = -1; i < 4; i++)
			{
				arr[Y + (i)][X - 1] = 2;
			}
		}
		else if (X == 9 && Y == 0)
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y + 3][X] = 2;
			for (int i = 0; i < 4; i++)
			{
				arr[Y + i][X - 1] = 2;
			}
		}
	}
	else if ((X == 1 || X == 2 || X == 3 || X == 4 || X == 5 || X == 6 || X == 7 || X == 8) && Y == 0)
	{

		for (int i = 0; i < 3; i++)
		{
			arr[Y + i][X] = 1;
		}
		arr[Y + 3][X] = 2;
		for (int i = 0; i < 4; i++)
		{
			arr[Y + i][X + 1] = 2;
		}
		for (int i = 0; i < 4; i++)
		{
			arr[Y + i][X - 1] = 2;
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			arr[Y + i][X] = 1;
		}
		arr[Y - 1][X] = 2;
		arr[Y + 3][X] = 2;
		for (int i = -1; i < 4; i++)
		{
			arr[Y + (i)][X + 1] = 2;
		}
		for (int i = -1; i < 4; i++)
		{
			arr[Y + (i)][X - 1] = 2;
		}
	}

}

void FillVerticallyTwo(int arr[][10], int Y, int X)
{
	if (X == 0)
	{
		if (Y == 0 && X == 0)
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y + 2][X] = 2;
			for (int i = 0; i < 3; i++)
			{
				arr[Y + i][X + 1] = 2;
			}
		}
		else if ((X == 0) && (Y == 1) || (Y == 2) || (Y == 3) || (Y == 4) || (Y == 5) || (Y == 6) || (Y == 7))
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y - 1][X] = 2;
			arr[Y + 2][X] = 2;
			for (int i = -1; i < 3; i++)
			{
				arr[Y + (i)][X + 1] = 2;
			}
		}
		else if (X == 0 && Y == 8)
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y - 1][X] = 2;
			for (int i = -1; i < 2; i++)
			{
				arr[Y + (i)][X + 1] = 2;
			}
		}

	}
	else if ((X == 1 || X == 2 || X == 3 || X == 4 || X == 5 || X == 6 || X == 7 || X == 8) && Y == 8)
	{
		for (int i = 0; i < 2; i++)
		{
			arr[Y + i][X] = 1;
		}
		arr[Y - 1][X] = 2;
		for (int i = -1; i < 2; i++)
		{
			arr[Y + (i)][X + 1] = 2;
		}
		for (int i = -1; i < 2; i++)
		{
			arr[Y + (i)][X - 1] = 2;
		}
	}
	else if (X == 9)
	{
		if (X == 9 && Y == 8)
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y - 1][X] = 2;
			for (int i = -1; i < 2; i++)
			{
				arr[Y + (i)][X - 1] = 2;
			}
		}
		else if ((X == 9) && (Y == 1) || (Y == 2) || (Y == 3) || (Y == 4) || (Y == 5) || (Y == 6) || (Y == 7))
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y - 1][X] = 2;
			arr[Y + 2][X] = 2;
			for (int i = -1; i < 3; i++)
			{
				arr[Y + (i)][X - 1] = 2;
			}
		}
		else if (X == 9 && Y == 0)
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y + i][X] = 1;
			}
			arr[Y + 2][X] = 2;
			for (int i = 0; i < 3; i++)
			{
				arr[Y + i][X - 1] = 2;
			}
		}
	}
	else if ((X == 1 || X == 2 || X == 3 || X == 4 || X == 5 || X == 6 || X == 7 || X == 8) && Y == 0)
	{
		for (int i = 0; i < 2; i++)
		{
			arr[Y + i][X] = 1;
		}
		arr[Y + 2][X] = 2;
		for (int i = 0; i < 3; i++)
		{
			arr[Y + i][X + 1] = 2;
		}
		for (int i = 0; i < 3; i++)
		{
			arr[Y + i][X - 1] = 2;
		}
	}
	else
	{
		for (int i = 0; i < 2; i++)
		{
			arr[Y + i][X] = 1;
		}
		arr[Y - 1][X] = 2;
		arr[Y + 2][X] = 2;
		for (int i = -1; i < 3; i++)
		{
			arr[Y + (i)][X + 1] = 2;
		}
		for (int i = -1; i < 3; i++)
		{
			arr[Y + (i)][X - 1] = 2;
		}
	}

}

void FillVerticallyOne(int arr[][10], int Y, int X)
{
	if (X == 0)
	{
		if (Y == 0 && X == 0)
		{
			arr[Y][X] = 1;
			arr[Y + 1][X] = 2;
			for (int i = 0; i < 2; i++)
			{
				arr[Y + i][X + 1] = 2;
			}
		}
		else if ((X == 0) && (Y == 1) || (Y == 2) || (Y == 3) || (Y == 4) || (Y == 5) || (Y == 6) || (Y == 7) || (Y == 8))
		{
			arr[Y][X] = 1;
			arr[Y - 1][X] = 2;
			arr[Y + 1][X] = 2;
			for (int i = -1; i < 2; i++)
			{
				arr[Y + (i)][X + 1] = 2;
			}
		}
		else if (X == 0 && Y == 9)
		{
			arr[Y][X] = 1;
			arr[Y - 1][X] = 2;
			for (int i = -1; i < 1; i++)
			{
				arr[Y + (i)][X + 1] = 2;
			}
		}
	}
	else if ((X == 1 || X == 2 || X == 3 || X == 4 || X == 5 || X == 6 || X == 7 || X == 8) && Y == 9)
	{
		arr[Y][X] = 1;
		arr[Y - 1][X] = 2;
		for (int i = -1; i < 1; i++)
		{
			arr[Y + (i)][X + 1] = 2;
		}
		for (int i = -1; i < 1; i++)
		{
			arr[Y + (i)][X - 1] = 2;
		}
	}
	else if (X == 9)
	{
		if (X == 9 && Y == 9)
		{
			arr[Y][X] = 1;
			arr[Y - 1][X] = 2;
			for (int i = -1; i < 1; i++)
			{
				arr[Y + (i)][X - 1] = 2;
			}
		}
		else if ((X == 9) && (Y == 1) || (Y == 2) || (Y == 3) || (Y == 4) || (Y == 5) || (Y == 6) || (Y == 7) || (Y == 8))
		{
			arr[Y][X] = 1;
			arr[Y - 1][X] = 2;
			arr[Y + 1][X] = 2;
			for (int i = -1; i < 2; i++)
			{
				arr[Y + (i)][X - 1] = 2;
			}
		}
		else if (X == 9 && Y == 0)
		{
			arr[Y][X] = 1;
			arr[Y + 1][X] = 2;
			for (int i = 0; i < 2; i++)
			{
				arr[Y + i][X - 1] = 2;
			}
		}
	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 0)
	{
		arr[Y][X] = 1;
		arr[Y + 1][X] = 2;
		for (int i = 0; i < 2; i++)
		{
			arr[Y + i][X + 1] = 2;
		}
		for (int i = 0; i < 2; i++)
		{
			arr[Y + i][X - 1] = 2;
		}
	}
	else
	{
		arr[Y][X] = 1;
		arr[Y - 1][X] = 2;
		arr[Y + 1][X] = 2;
		for (int i = -1; i < 2; i++)
		{
			arr[Y + (i)][X + 1] = 2;
		}
		for (int i = -1; i < 2; i++)
		{
			arr[Y + (i)][X - 1] = 2;
		}
	}

}