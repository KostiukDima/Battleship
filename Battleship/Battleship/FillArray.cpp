#include"FillArray.h"
#include<iostream>
#include<ctime>

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

void FillHorizontallyFour(int arr[][10], int Y, int X, int a, int b)
{
	if (Y == 0)
	{
		if (Y == 0 && X == 0)
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X + 4] = b;
			for (int i = 0; i < 5; i++)
			{
				arr[Y + 1][X + i] = b;
			}
		}
		else if ((Y == 0) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5))
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X - 1] = b;
			arr[Y][X + 4] = b;
			for (int i = -1; i < 5; i++)
			{
				arr[Y + 1][X + (i)] = b;
			}
		}
		else if (Y == 0 && X == 6)
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X - 1] = b;
			for (int i = -1; i < 4; i++)
			{
				arr[Y + 1][X + (i)] = b;
			}
		}
	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 6)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[Y][X + i] = a;
		}
		arr[Y][X - 1] = b;
		for (int i = -1; i < 4; i++)
		{
			arr[Y + 1][X + (i)] = b;
		}
		for (int i = -1; i < 4; i++)
		{
			arr[Y - 1][X + (i)] = b;
		}
	}
	else if (Y == 9)
	{
		if (Y == 9 && X == 6)
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X - 1] = b;
			for (int i = -1; i < 4; i++)
			{
				arr[Y - 1][X + (i)] = b;
			}
		}
		else if ((Y == 9) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5))
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X - 1] = b;
			arr[Y][X + 4] = b;
			for (int i = -1; i < 5; i++)
			{
				arr[Y - 1][X + (i)] = b;
			}
		}
		else if (Y == 9 && X == 0)
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X + 4] = b;
			for (int i = 0; i < 5; i++)
			{
				arr[Y - 1][X + i] = b;
			}
		}
	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 0)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[Y][X + i] = a;
		}
		arr[Y][X + 4] = b;
		for (int i = 0; i < 5; i++)
		{
			arr[Y + 1][X + i] = b;
		}
		for (int i = 0; i < 5; i++)
		{
			arr[Y - 1][X + i] = b;
		}
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			arr[Y][X + i] = a;
		}
		arr[Y][X - 1] = b;
		arr[Y][X + 4] = b;
		for (int i = -1; i < 5; i++)
		{
			arr[Y + 1][X + (i)] = b;
		}
		for (int i = -1; i < 5; i++)
		{
			arr[Y - 1][X + (i)] = b;
		}
	}
}

void FillHorizontallyThree(int arr[][10], int Y, int X, int a, int b)
{
	if (Y == 0)
	{
		if (Y == 0 && X == 0)
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X + 3] = b;
			for (int i = 0; i < 4; i++)
			{
				arr[Y + 1][X + i] = b;
			}
		}
		else if ((Y == 0) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5) || (X == 6))
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X - 1] = b;
			arr[Y][X + 3] = b;
			for (int i = -1; i < 4; i++)
			{
				arr[Y + 1][X + (i)] = b;
			}
		}
		else if (Y == 0 && X == 7)
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X - 1] = b;
			for (int i = -1; i < 3; i++)
			{
				arr[Y + 1][X + (i)] = b;
			}
		}
	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 7)
	{
		for (int i = 0; i < 3; i++)
		{
			arr[Y][X + i] = a;
		}
		arr[Y][X - 1] = b;
		for (int i = -1; i < 3; i++)
		{
			arr[Y + 1][X + (i)] = b;
		}
		for (int i = -1; i < 3; i++)
		{
			arr[Y - 1][X + (i)] = b;
		}
	}
	else if (Y == 9)
	{
		if (Y == 9 && X == 7)
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X - 1] = b;
			for (int i = -1; i < 3; i++)
			{
				arr[Y - 1][X + (i)] = b;
			}
		}
		else if ((Y == 9) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5) || (X == 6))
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X - 1] = b;
			arr[Y][X + 3] = b;
			for (int i = -1; i < 4; i++)
			{
				arr[Y - 1][X + (i)] = b;
			}
		}
		else if (Y == 9 && X == 0)
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X + 3] = b;
			for (int i = 0; i < 4; i++)
			{
				arr[Y - 1][X + i] = b;
			}
		}
	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 0)
	{
		for (int i = 0; i < 3; i++)
		{
			arr[Y][X + i] = a;
		}
		arr[Y][X + 3] = b;
		for (int i = 0; i < 4; i++)
		{
			arr[Y + 1][X + i] = b;
		}
		for (int i = 0; i < 4; i++)
		{
			arr[Y - 1][X + i] = b;
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			arr[Y][X + i] = a;
		}
		arr[Y][X - 1] = b;
		arr[Y][X + 3] = b;
		for (int i = -1; i < 4; i++)
		{
			arr[Y + 1][X + (i)] = b;
		}
		for (int i = -1; i < 4; i++)
		{
			arr[Y - 1][X + (i)] = b;
		}
	}
}

void FillHorizontallyTwo(int arr[][10], int Y, int X, int a, int b)
{
	if (Y == 0)
	{
		if (Y == 0 && X == 0)
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X + 2] = b;
			for (int i = 0; i < 3; i++)
			{
				arr[Y + 1][X + i] = b;
			}
		}
		else if ((Y == 0) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5) || (X == 6) || (X == 7))
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X - 1] = b;
			arr[Y][X + 2] = b;
			for (int i = -1; i < 3; i++)
			{
				arr[Y + 1][X + (i)] = b;
			}
		}
		else if (Y == 0 && X == 8)
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X - 1] = b;
			for (int i = -1; i < 2; i++)
			{
				arr[Y + 1][X + (i)] = b;
			}
		}

	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 8)
	{
		for (int i = 0; i < 2; i++)
		{
			arr[Y][X + i] = a;
		}
		arr[Y][X - 1] = b;
		for (int i = -1; i < 2; i++)
		{
			arr[Y + 1][X + (i)] = b;
		}
		for (int i = -1; i < 2; i++)
		{
			arr[Y - 1][X + (i)] = b;
		}
	}
	else if (Y == 9)
	{
		if (Y == 9 && X == 8)
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X - 1] = b;
			for (int i = -1; i < 2; i++)
			{
				arr[Y - 1][X + (i)] = b;
			}
		}
		else if ((Y == 9) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5) || (X == 6) || (X == 7))
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X - 1] = b;
			arr[Y][X + 2] = b;
			for (int i = -1; i < 3; i++)
			{
				arr[Y - 1][X + (i)] = b;
			}
		}
		else if (Y == 9 && X == 0)
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y][X + i] = a;
			}
			arr[Y][X + 2] = b;
			for (int i = 0; i < 3; i++)
			{
				arr[Y - 1][X + i] = b;
			}
		}
	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 0)
	{
		for (int i = 0; i < 2; i++)
		{
			arr[Y][X + i] = a;
		}
		arr[Y][X + 2] = b;
		for (int i = 0; i < 3; i++)
		{
			arr[Y + 1][X + i] = b;
		}
		for (int i = 0; i < 3; i++)
		{
			arr[Y - 1][X + i] = b;
		}
	}
	else
	{
		for (int i = 0; i < 2; i++)
		{
			arr[Y][X + i] = a;
		}
		arr[Y][X - 1] = b;
		arr[Y][X + 2] = b;
		for (int i = -1; i < 3; i++)
		{
			arr[Y + 1][X + (i)] = b;
		}
		for (int i = -1; i < 3; i++)
		{
			arr[Y - 1][X + (i)] = b;
		}
	}
}

void FillHorizontallyOne(int arr[][10], int Y, int X, int a, int b)
{
	if (Y == 0)
	{
		if (Y == 0 && X == 0)
		{
			arr[Y][X] = a;
			arr[Y][X + 1] = b;
			for (int i = 0; i < 2; i++)
			{
				arr[Y + 1][X + i] = b;
			}
		}
		else if ((Y == 0) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5) || (X == 6) || (X == 7) || (X == 8))
		{
			arr[Y][X] = a;
			arr[Y][X - 1] = b;
			arr[Y][X + 1] = b;
			for (int i = -1; i < 2; i++)
			{
				arr[Y + 1][X + (i)] = b;
			}
		}
		else if (Y == 0 && X == 9)
		{
			arr[Y][X] = a;
			arr[Y][X - 1] = b;
			for (int i = -1; i < 1; i++)
			{
				arr[Y + 1][X + (i)] = b;
			}
		}
	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 9)
	{
		arr[Y][X] = a;
		arr[Y][X - 1] = b;
		for (int i = -1; i < 1; i++)
		{
			arr[Y + 1][X + (i)] = b;
		}
		for (int i = -1; i < 1; i++)
		{
			arr[Y - 1][X + (i)] = b;
		}
	}
	else if (Y == 9)
	{
		if (Y == 9 && X == 9)
		{
			arr[Y][X] = a;
			arr[Y][X - 1] = b;
			for (int i = -1; i < 1; i++)
			{
				arr[Y - 1][X + (i)] = b;
			}
		}
		else if ((Y == 9) && (X == 1) || (X == 2) || (X == 3) || (X == 4) || (X == 5) || (X == 6) || (X == 7) || (X == 8))
		{
			arr[Y][X] = a;
			arr[Y][X - 1] = b;
			arr[Y][X + 1] = b;
			for (int i = -1; i < 2; i++)
			{
				arr[Y - 1][X + (i)] = b;
			}
		}
		else if (Y == 9 && X == 0)
		{
			arr[Y][X] = a;
			arr[Y][X + 1] = b;
			for (int i = 0; i < 2; i++)
			{
				arr[Y - 1][X + i] = b;
			}
		}
	}
	else if ((Y == 1 || Y == 2 || Y == 3 || Y == 4 || Y == 5 || Y == 6 || Y == 7 || Y == 8) && X == 0)
	{
		arr[Y][X] = a;
		arr[Y][X + 1] = b;
		for (int i = 0; i < 2; i++)
		{
			arr[Y + 1][X + i] = b;
		}
		for (int i = 0; i < 2; i++)
		{
			arr[Y - 1][X + i] = b;
		}
	}
	else
	{
		arr[Y][X] = a;
		arr[Y][X - 1] = b;
		arr[Y][X + 1] = b;
		for (int i = -1; i < 2; i++)
		{
			arr[Y + 1][X + (i)] = b;
		}
		for (int i = -1; i < 2; i++)
		{
			arr[Y - 1][X + (i)] = b;
		}
	}
}

void FillVerticallyFour(int arr[][10], int Y, int X, int a, int b)
{

	if (X == 0)
	{
		if (Y == 0 && X == 0)
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y + 4][X] = b;
			for (int i = 0; i < 5; i++)
			{
				arr[Y + i][X + 1] = b;
			}
		}
		else if ((X == 0) && (Y == 1) || (Y == 2) || (Y == 3) || (Y == 4) || (Y == 5))
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y - 1][X] = b;
			arr[Y + 4][X] = b;
			for (int i = -1; i < 5; i++)
			{
				arr[Y + (i)][X + 1] = b;
			}
		}
		else if (Y == 6 && X == 0)
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y - 1][X] = b;
			for (int i = -1; i < 4; i++)
			{
				arr[Y + (i)][X + 1] = b;
			}
		}
	}
	else if ((X == 1 || X == 2 || X == 3 || X == 4 || X == 5 || X == 6 || X == 7 || X == 8) && Y == 6)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[Y + i][X] = a;
		}
		arr[Y - 1][X] = b;
		for (int i = -1; i < 4; i++)
		{
			arr[Y + (i)][X + 1] = b;
		}
		for (int i = -1; i < 4; i++)
		{
			arr[Y + (i)][X - 1] = b;
		}
	}
	else if (X == 9)
	{
		if (X == 9 && Y == 6)
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y - 1][X] = b;
			for (int i = -1; i < 4; i++)
			{
				arr[Y + (i)][X - 1] = b;
			}
		}
		else if ((X == 9) && (Y == 1) || (Y == 2) || (Y == 3) || (Y == 4) || (Y == 5))
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y - 1][X] = b;
			arr[Y + 4][X] = b;
			for (int i = -1; i < 5; i++)
			{
				arr[Y + (i)][X - 1] = b;
			}
		}
		else if (X == 9 && Y == 0)
		{
			for (int i = 0; i < 4; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y + 4][X] = b;
			for (int i = 0; i < 5; i++)
			{
				arr[Y + i][X - 1] = b;
			}
		}
	}
	else if ((X == 1 || X == 2 || X == 3 || X == 4 || X == 5 || X == 6 || X == 7 || X == 8) && Y == 0)
	{
		for (int i = 0; i < 4; i++)
		{
			arr[Y + i][X] = a;
		}
		arr[Y + 4][X] = b;
		for (int i = 0; i < 5; i++)
		{
			arr[Y + i][X + 1] = b;
		}
		for (int i = 0; i < 5; i++)
		{
			arr[Y + i][X - 1] = b;
		}
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			arr[Y + i][X] = a;
		}
		arr[Y - 1][X] = b;
		arr[Y + 4][X] = b;
		for (int i = -1; i < 5; i++)
		{
			arr[Y + (i)][X + 1] = b;
		}
		for (int i = -1; i < 5; i++)
		{
			arr[Y + (i)][X - 1] = b;
		}
	}
}

void FillVerticallyThree(int arr[][10], int Y, int X, int a, int b)
{
	if (X == 0)
	{
		if (Y == 0 && X == 0)
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y + 3][X] = b;
			for (int i = 0; i < 4; i++)
			{
				arr[Y + i][X + 1] = b;
			}
		}
		else if ((X == 0) && (Y == 1) || (Y == 2) || (Y == 3) || (Y == 4) || (Y == 5) || (Y == 6))
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y - 1][X] = b;
			arr[Y + 3][X] = b;
			for (int i = -1; i < 4; i++)
			{
				arr[Y + (i)][X + 1] = b;
			}
		}
		else if (X == 0 && Y == 7)
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y - 1][X] = b;
			for (int i = -1; i < 3; i++)
			{
				arr[Y + (i)][X + 1] = b;
			}
		}
	}
	else if ((X == 1 || X == 2 || X == 3 || X == 4 || X == 5 || X == 6 || X == 7 || X == 8) && Y == 7)
	{
		for (int i = 0; i < 3; i++)
		{
			arr[Y + i][X] = a;
		}
		arr[Y - 1][X] = b;
		for (int i = -1; i < 3; i++)
		{
			arr[Y + (i)][X + 1] = b;
		}
		for (int i = -1; i < 3; i++)
		{
			arr[Y + (i)][X - 1] = b;
		}
	}
	else if (X == 9)
	{
		if (X == 9 && Y == 7)
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y - 1][X] = b;
			for (int i = -1; i < 3; i++)
			{
				arr[Y + (i)][X - 1] = b;
			}
		}
		else if ((X == 9) && (Y == 1) || (Y == 2) || (Y == 3) || (Y == 4) || (Y == 5) || (Y == 6))
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y - 1][X] = b;
			arr[Y + 3][X] = b;
			for (int i = -1; i < 4; i++)
			{
				arr[Y + (i)][X - 1] = b;
			}
		}
		else if (X == 9 && Y == 0)
		{
			for (int i = 0; i < 3; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y + 3][X] = b;
			for (int i = 0; i < 4; i++)
			{
				arr[Y + i][X - 1] = b;
			}
		}
	}
	else if ((X == 1 || X == 2 || X == 3 || X == 4 || X == 5 || X == 6 || X == 7 || X == 8) && Y == 0)
	{

		for (int i = 0; i < 3; i++)
		{
			arr[Y + i][X] = a;
		}
		arr[Y + 3][X] = b;
		for (int i = 0; i < 4; i++)
		{
			arr[Y + i][X + 1] = b;
		}
		for (int i = 0; i < 4; i++)
		{
			arr[Y + i][X - 1] = b;
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			arr[Y + i][X] = a;
		}
		arr[Y - 1][X] = b;
		arr[Y + 3][X] = b;
		for (int i = -1; i < 4; i++)
		{
			arr[Y + (i)][X + 1] = b;
		}
		for (int i = -1; i < 4; i++)
		{
			arr[Y + (i)][X - 1] = b;
		}
	}

}

void FillVerticallyTwo(int arr[][10], int Y, int X, int a, int b)
{
	if (X == 0)
	{
		if (Y == 0 && X == 0)
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y + 2][X] = b;
			for (int i = 0; i < 3; i++)
			{
				arr[Y + i][X + 1] = b;
			}
		}
		else if ((X == 0) && (Y == 1) || (Y == 2) || (Y == 3) || (Y == 4) || (Y == 5) || (Y == 6) || (Y == 7))
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y - 1][X] = b;
			arr[Y + 2][X] = b;
			for (int i = -1; i < 3; i++)
			{
				arr[Y + (i)][X + 1] = b;
			}
		}
		else if (X == 0 && Y == 8)
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y - 1][X] = b;
			for (int i = -1; i < 2; i++)
			{
				arr[Y + (i)][X + 1] = b;
			}
		}

	}
	else if ((X == 1 || X == 2 || X == 3 || X == 4 || X == 5 || X == 6 || X == 7 || X == 8) && Y == 8)
	{
		for (int i = 0; i < 2; i++)
		{
			arr[Y + i][X] = a;
		}
		arr[Y - 1][X] = b;
		for (int i = -1; i < 2; i++)
		{
			arr[Y + (i)][X + 1] = b;
		}
		for (int i = -1; i < 2; i++)
		{
			arr[Y + (i)][X - 1] = b;
		}
	}
	else if (X == 9)
	{
		if (X == 9 && Y == 8)
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y - 1][X] = b;
			for (int i = -1; i < 2; i++)
			{
				arr[Y + (i)][X - 1] = b;
			}
		}
		else if ((X == 9) && (Y == 1) || (Y == 2) || (Y == 3) || (Y == 4) || (Y == 5) || (Y == 6) || (Y == 7))
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y - 1][X] = b;
			arr[Y + 2][X] = b;
			for (int i = -1; i < 3; i++)
			{
				arr[Y + (i)][X - 1] = b;
			}
		}
		else if (X == 9 && Y == 0)
		{
			for (int i = 0; i < 2; i++)
			{
				arr[Y + i][X] = a;
			}
			arr[Y + 2][X] = b;
			for (int i = 0; i < 3; i++)
			{
				arr[Y + i][X - 1] = b;
			}
		}
	}
	else if ((X == 1 || X == 2 || X == 3 || X == 4 || X == 5 || X == 6 || X == 7 || X == 8) && Y == 0)
	{
		for (int i = 0; i < 2; i++)
		{
			arr[Y + i][X] = a;
		}
		arr[Y + 2][X] = b;
		for (int i = 0; i < 3; i++)
		{
			arr[Y + i][X + 1] = b;
		}
		for (int i = 0; i < 3; i++)
		{
			arr[Y + i][X - 1] = b;
		}
	}
	else
	{
		for (int i = 0; i < 2; i++)
		{
			arr[Y + i][X] = a;
		}
		arr[Y - 1][X] = b;
		arr[Y + 2][X] = b;
		for (int i = -1; i < 3; i++)
		{
			arr[Y + (i)][X + 1] = b;
		}
		for (int i = -1; i < 3; i++)
		{
			arr[Y + (i)][X - 1] = b;
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