#include<iostream>
#include<Windows.h>
#include<ctime>
#include<string>
#include"FillArray.h"
#include"Location.h"
#include"Output.h"

using namespace std;

void Output(int arrOne[][10], int arrTwo[][10], char nameone[], char nametwo[])
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

	cout << "\t    "<<nameone<<"\t\t\t\t"<<nametwo<< endl;

	cout << "   ";

	for (int i = 65; i < 75; i++)
	{
		cout << char(i) << "  ";
	}
	cout << "     ";
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
				SetConsoleTextAttribute(console, 14);
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
			if (arrTwo[i][j] == 0)
			{
				SetConsoleTextAttribute(console, 9);
				cout << "=";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrTwo[i][j] == 1)
			{
				SetConsoleTextAttribute(console, 2);
				cout << "X";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrTwo[i][j] == 2)
			{
				SetConsoleTextAttribute(console, 9);
				cout << "=";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrTwo[i][j] == 3)
			{
				SetConsoleTextAttribute(console, 14);
				cout << "*";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrTwo[i][j] == 4)
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

void OutputTwo(int arrOne[][10], int arrTwo[][10], char nameone[], char nametwo[])
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

	cout << "\t    " << nameone << "\t\t\t\t" << nametwo << endl;

	cout << "   ";

	for (int i = 65; i < 75; i++)
	{
		cout << char(i) << "  ";
	}
	cout << "     ";
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
			if (arrOne[i][j] == 0)
			{
				SetConsoleTextAttribute(console, 9);
				cout << "=";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrOne[i][j] == 1)
			{
				SetConsoleTextAttribute(console, 9);
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
				SetConsoleTextAttribute(console, 14);
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
			if (arrTwo[i][j] == 0)
			{
				SetConsoleTextAttribute(console, 9);
				cout << "=";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrTwo[i][j] == 1)
			{
				SetConsoleTextAttribute(console, 9);
				cout << "=";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrTwo[i][j] == 2)
			{
				SetConsoleTextAttribute(console, 9);
				cout << "=";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrTwo[i][j] == 3)
			{
				SetConsoleTextAttribute(console, 2);
				cout << "*";
				SetConsoleTextAttribute(console, 7);
			}
			else if (arrTwo[i][j] == 4)
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