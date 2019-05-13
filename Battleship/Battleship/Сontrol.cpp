#include "Ñontrol.h"
#include"FillArray.h"

void Control(int arr[][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j-1] != 4 && arr[i][j] == 4 && arr[i][j + 1] == 4 && arr[i][j + 2] == 4 && arr[i][j + 3] == 4)
			{
				FillHorizontallyFour(arr, i, j);
			}
			if (arr[i-1][j] != 4 && arr[i][j] == 4 && arr[i+1][j] == 4 && arr[i+2][j] == 4 && arr[i+3][j] == 4)
			{
				FillVerticallyFour(arr, i, j);
			}
			if (arr[i][j-1] != 4 && arr[i][j] == 4 && arr[i][j + 1] == 4 && arr[i][j + 2] == 4 && arr[i][j + 3] != 4)
			{
				FillHorizontallyThree(arr, i, j);
			}
			if (arr[i - 1][j] != 4 && arr[i][j] == 4 && arr[i + 1][j] == 4 && arr[i + 2][j] == 4 && arr[i + 3][j] != 4)
			{
				FillVerticallyThree(arr, i, j);
			}
			if (arr[i][j - 1] != 4 && arr[i][j] == 4 && arr[i][j + 1] == 4 && arr[i][j + 2] != 4 )
			{
				FillHorizontallyTwo(arr, i, j);
			}
			if (arr[i - 1][j] != 4 && arr[i][j] == 4 && arr[i + 1][j] == 4 && arr[i + 2][j] != 4 )
			{
				FillVerticallyTwo(arr, i, j);
			}
			if (arr[i][j - 1] != 4 && arr[i][j] == 4 && arr[i][j + 1] != 4 && arr[i-1][j] != 4 && arr[i+1][j] != 4)
			{
				FillHorizontallyOne(arr, i, j);
			}
		}
	}
}
