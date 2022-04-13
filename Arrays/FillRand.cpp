#include "FillRand.h"
#include "stdafx.h"

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (minRand - maxRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (minRand - maxRand) + minRand;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (minRand - maxRand) + minRand;
		}
		cout << endl;
	}
}
//void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100)
//{
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % (minRand - maxRand) + minRand;
//	}
//}
