#include "Control.h"
#include"FillArray.h"

void Control(int arr[][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j-1] != 4 && arr[i][j - 1] != 1 && arr[i][j] == 4 && arr[i][j + 1] == 4 && arr[i][j + 2] == 4 && arr[i][j + 3] == 4 && arr[i][j + 4] != 4 && arr[i][j + 4] != 1)
			{
				FillHorizontallyFour(arr, i, j, 4, 3);
			}
			else if (arr[i-1][j] != 4 && arr[i - 1][j] != 1 && arr[i][j] == 4 && arr[i+1][j] == 4 && arr[i+2][j] == 4 && arr[i+3][j] == 4 && arr[i + 4][j] != 4 && arr[i + 4][j] != 1)
			{
				FillVerticallyFour(arr, i, j, 4, 3);
			}
			else if (arr[i][j-1] != 4 && arr[i][j - 1] != 1 && arr[i][j] == 4 && arr[i][j + 1] == 4 && arr[i][j + 2] == 4 && arr[i][j + 3] != 4 && arr[i][j + 3] != 1)
			{
				FillHorizontallyThree(arr, i, j, 4, 3);
			}
			else if (arr[i - 1][j] != 4 && arr[i - 1][j] != 1 && arr[i][j] == 4 && arr[i + 1][j] == 4 && arr[i + 2][j] == 4 && arr[i + 3][j] != 4 && arr[i + 3][j] != 1)
			{
				FillVerticallyThree(arr, i, j, 4, 3);
			}
			else if (arr[i][j - 1] != 4 && arr[i][j - 1] != 1 && arr[i][j] == 4 && arr[i][j + 1] == 4 && arr[i][j + 2] != 4 && arr[i][j + 2] != 1)
			{
				FillHorizontallyTwo(arr, i, j, 4, 3);
			}
			else if (arr[i - 1][j] != 4 && arr[i - 1][j] != 1 && arr[i][j] == 4 && arr[i + 1][j] == 4 && arr[i + 2][j] != 4 && arr[i + 2][j] != 1)
			{
				FillVerticallyTwo(arr, i, j, 4, 3);
			}
			else if (arr[i][j - 1] != 4 && arr[i][j - 1] != 1 && arr[i][j] == 4 && arr[i][j + 1] != 4 && arr[i][j + 1] != 1 && arr[i-1][j] != 4 && arr[i - 1][j] != 1 && arr[i+1][j] != 4 && arr[i + 1][j] != 1)
			{
				FillHorizontallyOne(arr, i, j, 4, 3);
			}
		}
	}
}
