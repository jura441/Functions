#include<iostream>
using namespace std;

void elevator(int floor);
double power(double a, int n);
int factorial(int n);
int fibbonacci(int n);
//#define ELEVATOR
//#define FACTORIAL
//#define POWER 

void main()
{
	setlocale(LC_ALL, "");
	/*cout << "Hello World!";
	main();*/
	
#ifdef ELEVATOR
	double a;
	int n;
	cout << "������� ����� �����: "; cin >> n;
	elevator(n);
#endif // ELEVATOR
	
#ifdef FACTORIAL
	int n;
	cout << "������� ����� ��� ���������� ����������: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;
	int n;
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	cout << power(a, n) << endl;
#endif // POWER
	 
	int n;
	cout << "������� ���������� ����� ���������: "; cin >> n;
	cout << fibbonacci(n) << endl;
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << " �����\n";
	elevator(floor - 1);
	cout << "�� �� " << floor << " �����\n";
}

int factorial(int n)
{
	if (n < 0)return 0;
	if (n == 0)return 1;
	return n* factorial(n - 1);
}

double power(double a, int n)
{
	/*if (n == 0) return 1;
	else if (n > 0) return a * power(a, n - 1);
	else return 1 / a * power(a, n + 1);
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / a * power(a, n + 1);*/
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / power(a, -n);

}

int fibbonacci(int n)
{
	if (n == 0)return 0;
	if (n == 1)return 1;
	return fibbonacci(n - 1) + fibbonacci(n - 2);
	return n == 0 ? 0 : n == 1 ? 1 : fibbonacci(n - 1) + fibbonacci(n - 2);
}
