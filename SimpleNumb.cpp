#include <iostream>

using namespace std;

bool Checking(long long);

void Printing(long long);

int main() 

{

	short ok = true;

	while (ok)
	    
	    {

		long long n = 2, a;

		cout << "Please, enter range" << endl;

		cin >> a;

		while (a < 2) 
		
		{

			cout << "Please enter other range" << endl;

			cin >> a;

		}

		Printing(a);

		cout << "If you want to continue press 1" << endl;

		cout << "If you want to exit press 0" << endl;

		cin >> ok;

		if (ok == 0)

			return 0;

		if (ok == 1)

			system("cls");

		else return 0;

	}

}


bool Checking(long long n) 

{

	int i;

	for (i = 2; i <= sqrt(n); i++)

		if (!(n % i))

			return false;

	return true;

}


void Printing(long long a) 

{

	int n = 2;

	while (n <= a) {

		if (Checking(n))

			cout << n << "  ";

		n++;

	}

	cout << endl;

}