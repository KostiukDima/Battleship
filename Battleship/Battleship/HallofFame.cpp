#include<iostream>
#include<string>
#include<fstream>
#include "HallofFame.h"
#include <Windows.h>
#include <stdio.h>
#include <time.h>


using namespace std;
void HallofFame()
{
	system("cls");
	bool exit = false;
	int choise = 0;
		
	char Data[256];
	char data;
	
	ifstream readFile;

	string  fame = "HallofFame.txt";

	readFile.open(fame);
	if (!readFile.is_open())
	{
		cout << "Canot open" << endl;
	}
	else
	{
		int i = 0;
		while (readFile.get(data))
		{
			Data[i] = data;
			i++;
		}
		Data[i] = '\0';
	}
	readFile.close();
	
	cout << Data;
	cin.get();
	cin.get();
	
}

void WriteHallofFame(int move, char nameWin[], char opponent[])
{
	string  fame = "HallofFame.txt";
	ofstream writeFile;
	writeFile.open(fame, ofstream::app);

	SYSTEMTIME st;
	GetSystemTime(&st);
	
	
	if (!writeFile.is_open())
	{
		cout << "Dotn open file" << endl;
	}
	else
	{
		writeFile << "\n"<<move<<"\t\t"<<nameWin<<"\t\t"<<opponent<<"\t"<<st.wDay<<"."<<st.wMonth<<"."<<st.wYear;
	}
	writeFile.close();
}
