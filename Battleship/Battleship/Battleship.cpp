#include<iostream>
#include<Windows.h>
#include<ctime>
#include<string>
#include"FillArray.h"
#include"Location.h"
#include"Output.h"

using namespace std;



void ComputerVsPlayer(int computer[][10], int player[][10])
{
	string name;
	cout << "Enter your name" << endl;
	cin >> name;
	int placement;


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
		}
		else if (placement == 2)
		{
			//ManuallyLocation(player);
			RandomLocation(computer);
		}
	}
}
