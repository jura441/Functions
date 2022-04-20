#include"stdafx.h"
#include"Constants.h"

template <typename T>void FillRand(T arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (minRand - maxRand) + minRand;
	}
}
template <typename T>void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (minRand - maxRand) + minRand;
		}
	}
}
