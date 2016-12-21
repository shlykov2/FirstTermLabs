#include <iostream>
#include <conio.h>

using namespace std;


bool NotDecreasing(int A[11], int n);


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


	_getch();

	int A[11], int n, int b[], int& j, int number2;

	j = 0;

	if (!(NotDecreasing(A, n)))

		cout << "Sorry, massive is decreasing\n";

	else

	{

		for (int i = 0, prev = 0; i < n; i++, prev++)

			if (A[prev] < number2)

			{

				b[j] = A[prev];

				j++;

			}

	}

	return 0;



}


bool NotDecreasing(int A[11], int n)

{

	int i = 1, first = 0;

	bool eq = false, less = false, grt = false;

	while (i < n) {

		if (A[first] > A[i])

			less = true;

		else if (A[first] < A[i])

			grt = true;

		else if (A[first] = A[i])

			eq = true;

		first++;

		i++;

	}

	if ((eq && less && !grt) || (!eq && less && !grt))

		return false;

}