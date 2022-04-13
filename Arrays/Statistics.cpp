#include "Statistics.h"
#include "stdafx.h"



int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
		return sum;
	}
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
		}
	}
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
//int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
//{
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			if (arr[i][j] , min;
//		}
//	return min;
//	}
//}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
//int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
//{
//int max=arr[0][0];
// for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			if (arr[i][j] > max;
//		}
//	return max;
//	}
//}
