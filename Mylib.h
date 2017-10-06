#pragma once
#include <math.h>
#include <iostream>
int ak(long int, int);
int ak(long int n, int k)
{
	long int s;
	s = n / int(pow(10, k - 1));
	s = s % 10;
	return s;
}


int giaithua(int n);
int giaithua(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++) s *= i;
	return(s);
}

int sochuso(long int);
int sochuso(long int n)
{
	int i = 1;
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return i;
}

float doigiatri (float &a, float &b)
{
	float temp = a;
	a = b;
	b = temp;
}

//tinh cos
float tinhcos(float, float, float, char);
float tinhcos(float a, float b, float c, char goc)
{
	if (goc == 'A')
	{
		return (b*b + c*c - a*a) / (2 * b*c);
	}
	if (goc == 'B')
	{
		return (a*a + c*c - b*b) / (2 * a*c);
	}
	if (goc == 'C')
	{
		return (a*a + b*b - c*c) / (2 * a*b);
	}
}
