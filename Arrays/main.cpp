
#include"stdafx.h"
#include"FillRand.h"
#include"FillRand.cpp"
#include"Print.h"
#include"Print.cpp"
#include"Constants.h"
#include"Statistics.cpp"


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


