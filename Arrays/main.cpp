#include <iostream>
#include"stdafx.h"
#include"Constants.h"
#include"Print.h"
#include"Print.cpp"


template <typename T>
void FillRand(T arr[], const int n, int minRand = 0, int maxRand = 100);
template <typename T>
void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);



template <typename T>T Sum(T arr[], const int n);
template <typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>double Avg(T arr[], const int n);
template <typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>T minValueIn(T arr[], const int n);
template <typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>T maxValueIn(T arr[], const int n);
template <typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>void shiftsLeft(T arr[], const int n, int number_of_shifts);
template <typename T>void shiftsRight(T arr[], const int n, int number_of_shifts);

template <typename T>void Sort(T arr[], const int n);
template <typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	cout << "Сумма элементов массива:" << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива:" << Avg(arr, n) << endl;
	cout << "Минимальное значение: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	cout << "Сортировка массива" << endl;
	Print(arr, n);
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts; 
	shiftsLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftsRight(arr, n, number_of_shifts);
	Print(arr, n);
	cout << delimiter << endl;

	const int m = 8;
	double brr[m];
	FillRand(brr, m, 5, 100);
	Print(brr, m);
	cout << "Сумма элементов массива:" << Sum(brr, m) << endl;
	cout << "Среднее арифметическое элементов массива:" << Avg(brr, m) << endl;
	cout << "Минимальное значение: " << minValueIn(brr, m) << endl;
	cout << "Максимальное значение: " << maxValueIn(brr, m) << endl;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftsLeft(brr, n, number_of_shifts);
	Print(brr, n);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftsRight(brr, n, number_of_shifts);
	Print(brr, n);
	cout << delimiter << endl;

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "Сумма элементов массива:" << Sum(arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива:" << Avg(arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(arr2, ROWS, COLS) << endl;
	
	cout << delimiter << endl;

	double d_arr2[ROWS][COLS];
	FillRand(d_arr2, ROWS, COLS);
	Print(d_arr2, ROWS, COLS);
	cout << "Сумма элементов массива:" << Sum(d_arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива:" << Avg(d_arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(d_arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(d_arr2, ROWS, COLS) << endl;

	cout << delimiter << endl;
}

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



template <typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template <typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
		return sum;
	}
}

template <typename T>double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template <typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template <typename T>T minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template <typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}

template <typename T>T maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template <typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}

template <typename T>void shiftsLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
template <typename T>void shiftsRight(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts * 2; i++)
	{
		T buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

template <typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template <typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = 0; k < COLS - 1; k++)
			{
				if (arr[j][k] > arr[j][k + 1])
				{
					T buffer = arr[j][k];
					arr[j][k] = arr[j][k + 1];
					arr[j][k + 1] = buffer;
				}
			}
		}
	}
}
