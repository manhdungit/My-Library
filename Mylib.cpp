#include<iostream>
#include <math.h>
using namespace std;

int ak(long int n, int k)
{
	long int s;
	s = n / int(pow(10, k - 1));
	s = s % 10;
	return s;
}

int factorial(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++) s *= i;
	return(s);
}

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

void traodoigiatri(float &a, float &b)
{
	float temp = a;
	a = b;
	b = temp;
}
void traodoigiatri(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

float cos_of(float a, float b, float c, char goc)
{
	if (goc == 'A')
	{
		return (b*b + c*c - a*a) / (2 * b*c);
	}
	else
	{
		if (goc == 'B')
		{
			return (a*a + c*c - b*b) / (2 * a*c);
		}
		else
		{
			if (goc == 'C')
			{
				return (a*a + b*b - c*c) / (2 * a*b);
			}
		}
	}
}

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

void nhapmang(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
}

void xuatmang(int *A, int n)
{
	cout << "Gia tri cac phan tu la: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = " << A[i] << endl;
	}
}

void tim_thu_cua_ngay(int dd, int mm, int yy)
{
	int thu, ngay, i, j;
	ngay = 0, thu = 0, j = 0, i = 1;
	for (i = 1; i <= mm - 1; i++)
	{
		switch (i)
		{
		case 2:
		{
			if ((yy % 400 == 0) || (yy % 4 == 0 && yy % 100 != 0)) ngay += 29;
			else ngay += 28;
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			ngay += 30;
			break;
		}
		default:
		{
			ngay += 31;
			break;
		}
		}
	}
	ngay += dd;
	ngay += (yy - 1) * 365;
	i = 4;
	while (i < yy)
	{
		if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0) ngay += 1;
		i += 4;
	}
	thu = (ngay + 1) % 7;
	switch (thu)
	{
	case 1:
	{
		cout << "Sunday";
		break;
	}
	case 2:
	{
		cout << "Monday";
		break;
	}
	case 3:
	{
		cout << "Tuesday";
		break;
	}
	case 4:
	{
		cout << "Wednesday";
		break;
	}
	case 5:
	{
		cout << "Thursday";
		break;
	}
	case 6:
	{
		cout << "Friday";
		break;
	}
	case 0:
	{
		cout << "Saturday";
		break;
	}
	}
}

int n_elements_array(int i, int *A, int n)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (*(A + j) == *(A + i)) dem++;
	return dem;
}

bool KTdaytang(int *A, int n)
{
	bool tm = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (A[i] > A[i + 1]) return 0;
	}
	return 1;
}

bool KTdaytangtu(int *A, int n, int x)
{
	bool tm = 0;
	for (int i = x-1; i < n - 1; i++)
	{
		if (A[i] > A[i + 1]) return 0;
	}
	return 1;
}

bool KTdaygiam(int *A, int n)
{
	bool tm = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (A[i] < A[i + 1]) return 0;
	}
	return 1;
}

bool KTdaygiamtu(int *A, int n, int x)
{
	bool tm = 0;
	for (int i = x-1; i < n - 1; i++)
	{
		if (A[i] < A[i + 1]) return 0;
	}
	return 1;
}

void sapdaytang(int *A, int n)
{
	while (KTdaytang(A, n) == 0)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (A[i] > A[i + 1]) traodoigiatri(A[i], A[i + 1]);
		}
	}

}

void sapdaytangtu(int *A, int n, int x)
{
	while (KTdaytangtu(A, n, x) == 0)
	{
		for (int i = x-1; i < n - 1; i++)
		{
			if (A[i] > A[i + 1]) traodoigiatri(A[i], A[i + 1]);
		}
	}

}

void sapdaygiam(int *A, int n)
{
	while (KTdaygiam(A, n) == 0)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (A[i] < A[i + 1]) traodoigiatri(A[i], A[i + 1]);
		}
	}

}

void sapdaygiamtu(int *A, int n, int x)
{
	while (KTdaygiamtu(A, n, x) == 0)
	{
		for (int i = x-1; i < n - 1; i++)
		{
			if (A[i] < A[i + 1]) traodoigiatri(A[i], A[i + 1]);
		}
	}
}

void phanmangchanle(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (A[i] % 2 == 0)
			{
				traodoigiatri(*(A + i), *(A + j));
			}
		}
	}
}


/*
cout << "Nhap kich thuoc m x n cua ma tran: ";
int m, n;
cin >> m >> n;
float *mat;
mat = new float[m*n];
*/
void cin_mat(float *mat, int n)
{
	cout << "Nhap vao ma tran kich thuoc " << n << "x" << n << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "A[" << i << "]" << "[" << j << "] = ";
			cin >> *(mat + i*n + j);
		}

	}
	cout << "\n";
}
void cin_mat(int *mat, int n)
{
	cout << "Nhap vao ma tran kich thuoc " << n << "x" << n << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "A[" << i << "]" << "[" << j << "] = ";
			cin >> *(mat + i*n + j);
		}

	}
	cout << "\n";
}

void cout_mat(float *mat, int n)
{
	cout << "Solution: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << " " << *(mat + i*n + j) << " ";
		}
		cout << endl;
	}
}
