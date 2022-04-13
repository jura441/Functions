#include <iostream>
using namespace std;

#include "Constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Statistics.h"
#include "Shift.h"
#include "Sort.h"


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
	FillRand(brr, m);
	Print(brr, m);
	cout << "Сумма элементов массива:" << Sum(brr, m) << endl;
	cout << "Среднее арифметическое элементов массива:" << Avg(brr, m) << endl;
	cout << "Минимальное значение: " << minValueIn(brr, m) << endl;
	cout << "Максимальное значение: " << maxValueIn(brr, m) << endl;

	cout << delimiter << endl;

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);

}

