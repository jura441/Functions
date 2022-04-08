#include <iostream>
using namespace std;
int Add(int a, int b); // Прототип функции (объявление функции - Function declaration)
// Прототип нужн для того чтобы имя функции и ее список принимаемых параметров были 
// известны на момент вызова
int Sub(int a, int b);	// Прототип состоит только из заголовка функции
int Mul(int a, int b/*Принимаемые параметры*/); // 
double Div(int a, int b);
double Power(double a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа:"; cin >> a >> b;
	int c = Add(a, b); // Вызов функции - Function call
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub (a,b) << endl;
	cout << a << " * " << b << " = " << Mul (a,b/* Передаваемые параметры*/) << endl; //
	cout << a << " / " << b << " = " << Div (a,b) << endl;
	cout << a << " ^ " << b << " = " << Power (a,b) << endl;
	
}
int Add(int a, int b) // Реализация функции (Определение функции - Function defenition)
// Реализует то что делает функция.
{
	int c = a + b;
	return c;
}
int Sub(int a, int b) // Реализация состоит из заголовка и тела функции
{
	return a - b;
}
int Mul(int a, int b/*принимаемые параметры*/)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}
double Power (double a, double b)
{
	int k = 1;
	for (int i=0;i<b;i++)
	return k;
}
