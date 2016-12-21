#include <iostream>

#include <conio.h>



using namespace std;



void locmaxNumbers(int a[11], int b[], int n, int& j);

void locminNumbers(int a[11], int b[], int n, int& j);



int main()

{

	int A[11];



	cout << "Enter the array\n";



	for (int i = 0; i < 11; i++)

	{

		cout << "Enter " << i << "'s element: ";

		while (!(cin >> A[i]))

		{

			cin.clear();

			while (cin.get() != '\n');

			cout << "Enter " << i << "'element: ";

		}

	}



	system("cls");



	int option;



	cout << "Choose the option (1 or 2): \n";



	cin >> option;



	switch (option)

	{

	case '1': void locmaxNumbers(int a[11], int b[], int n, int& j);
		
		//break;



	case '2': void locminNumbers(int a[11], int b[], int n, int& j);

		//break;



	default:

		cout << "There is no such an operation!\n";

	}



	_getch();

	return 0;

}




void locmaxNumbers(int a[11], int b[], int n, int& j)

{

	j = 0;

	if (a[0] > a[1])

	{

		b[j] = a[0];

		j++;

	}

	if (a[n - 1] > a[n - 2])

	{

		b[j] = a[n - 1];

		j++;

	}

	for (int i = 1; i < n - 1; i++)

		if ((a[i] > a[i + 1]) && (a[i] > a[i - 1]))

		{

			b[j] = a[i];

			j++;

		}

}





void locminNumbers(int a[11], int b[], int n, int& j)

{

	j = 0;

	if (a[0] < a[1])

	{

		b[j] = a[0];

		j++;

	}

	if (a[n - 1] < a[n - 2])

	{

		b[j] = a[n - 1];

		j++;

	}

	for (int i = 1; i < n - 1; i++)

		if ((a[i] < a[i + 1]) && (a[i] < a[i - 1]))

		{

			b[j] = a[i];

			j++;

		}

}