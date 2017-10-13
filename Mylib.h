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


int factorial(int n);
int factorial(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++) s *= i;
	return(s);
}

int number_of_digit(long int);
int number_of_digit(long int n)
{
	int i = 1;
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return i;
}

float swap (float &a, float &b)
{
	float temp = a;
	a = b;
	b = temp;
}

//tinh cos
float cos_of(float, float, float, char);
float cos_of(float a, float b, float c, char goc)
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

/* So nguyen to */

bool number_of_argument(int n)
{
	if (n == 1) return 0;
	if (n == 2) return 1;
	for (int i = 2; i < n; i++)
	{
		if (n%i == 0) return 0;
	}
	return 1;
}

/* So chu so */
int number_of_numbers(long int n)
{
	if (n < 0) n = -n;
	if (n == 0) return 1;
	int count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return count;
}

/*So uoc so*/
int number_of_divisor(int n)
{
	if (n == 1) return 1;
	else
	{
		if (n == 2) return 2;
	}
	int counting = 2;
	for (int i = 2; i < n; i++)
	{
		if (n%i == 0) counting++;
	}
	return counting;
}

/*Uoc chung lon nhat*/
int GCD(int a, int b)
{
	int a1, b1, UCLN, temp;
	a1 = abs(a);
	b1 = abs(b);
	if (a == 0 || b == 0)
	{
		UCLN = a1 + b1;
		if (UCLN == 0)
		{
			return 0;
		}
		else
		{
			return UCLN;
		}
	}
	while (b1 != 0)
	{
		temp = a1%b1;
		a1 = b1;
		b1 = temp;
	}
	UCLN = a1;
	return a1;
}

/*Nhap mang*/
void nhapmang(int *A, int &n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
}

/*Xuat mang*/
void xuatmang(int *A, int n)
{
	cout << "Gia tri cac phan tu la: "<<endl;
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = " << A[i]<<endl;
	}
}
