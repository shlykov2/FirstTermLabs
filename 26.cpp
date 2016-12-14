#include <iostream>

using namespace std;

const int N = 100;

int SumNagative(int a[], int n);

int SumPositive(int a[], int n);

int main()

{

	short ok = true;

	while (ok) 
	 
	  {

		int a[N] = { 0 };

		int n,  i, j;

		system("cls");

		while (true)

		{

			cout << "Enter n > 0 and n <= " << N << ": ";

			cin >> n;

			if (n > 0 && n <= N)

				break;

		}

		cout << endl;

			cout << "Sum of negative elements = " << SumNagative(a, n) << endl;

			cout << "Sum of positive elements = " << SumPositive(a, n) << endl;

			cout << "If you want to continue press 1" << endl;

			cout << "If you want to exit press 0" << endl;

		cin >> ok;

		if (ok == 0)

			return 1;

		if (ok == 1)

			system("cls");

		else return 0;

	}

}


int SumNagative(int a[], int n)

{

	int sum = 0, i = 0;

	while (i < n)
	{

		if (a[i] < 0)

			sum += a[i];

		i++;

	}

	return sum;

}



int SumPositive(int a[], int n) 

{

	int sum = 0, i = 0;

	while (i < n)
	{

		if (a[i] > 0)

			sum += a[i];

		i++;

	}

	return sum;

}