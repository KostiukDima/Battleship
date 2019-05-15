#include<iostream>
#include<string>
#include<fstream>
#include "HallofFame.h"

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
