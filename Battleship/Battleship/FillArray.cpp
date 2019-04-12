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