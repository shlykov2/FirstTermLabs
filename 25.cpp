#include <iostream>

using namespace std;

const int N = 100;

void EnterArray(int a[], int n);

void RandomArray(int a[], int n);

void DisplayArray(int a[], int n);

int Min(int a[], int n);

int Max(int a[], int n);


int main()

{

	short ok = true;

	while (ok) 
	
	{

		int a[N] = { 0 };

		int n, i, j;

		system("cls");

		while (true)

		{

			cout << "Enter n > 0 and n <= " << N << ": ";

			cin >> n;

			if (n > 0 && n <= N)

				break;

		}

		RandomArray(a, n);

		cout << "Source array" << endl;

		DisplayArray(a, n);

		cout << endl;

		i = Min(a, n), j = Max(a, n);

		cout << "min[" << i + 1 << "] = " << a[i] << "  max[" << j + 1 << "] = " << a[j] << endl;

		break;

	}

	cout << "If you want to continue press 1" << endl;

	cout << "If you want to exit press 0" << endl;

	cin >> ok;

	if (ok == 0)

		return 1;

	if (ok == 1)

		system("cls");

	else return 0;

}





void EnterArray(int a[], int n)

{

	for (int i = 0; i < n; i++)

	{

		cout << "a[" << (i + 1) << "] = ";

		cin >> a[i];

	}

}



void RandomArray(int a[], int n)

{

	for (int i = 0; i < n; i++)

		a[i] = rand() % 100 - 50;

}



void DisplayArray(int a[], int n)

{

	for (int i = 0; i < n; i++)

	{

		cout << a[i] << " ";

	}

}



int Min(int a[], int n)

{

	int min = 0;

	for (int i = 1; i < n; i++)

	{

		if (a[min] >= a[i])

		{

			min = i;

		}

	}

	return min;

}



int Max(int a[], int n)

{

	int max = 0;

	for (int i = 1; i < n; i++)

	{

		if (a[max] < a[i])

		{

			max = i;

		}

	}

	return max;

}