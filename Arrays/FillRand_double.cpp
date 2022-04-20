
#include"stdafx.h"

void FillRand(double arr[], const int n, int minRand, int maxRand)
{
		minRand *= 100;
		maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (minRand - maxRand) + minRand;
		arr[i] /= 100;
		
	}
}