#include <iostream>

using namespace std;

int main()

{

	cout << "Menu:" << endl;

	cout << "Press 1 if you want to calculate the roots" << endl;

	cout << "Press 2 if you want to display it with coefficients" << endl;

	int m;

	cin >> m;

	cout << "Enter coefficients" << endl;
    
	double a, b, c;
	
	while (true)

	{

		cout << "a: ";

		cin >> a;

		if (a != 0)

			break;

		else

			cout << "Input Error" << endl;

		system("cls");

	}

	cout << "b: ";

	cin >> b;

	cout << "c: ";

	cin >> c;

	double d, x1, x2;

	switch (m)

	{

	case 1:

		d = b * b - 4 * a * c;

		if (d < 0)

			cout << "No real roots" << endl;

		else
			
		if (d == 0)

			cout << "The only real root is" << -b / 2 / a << endl;

		else

		{

			cout << "x1 = " << (-b + sqrt(d)) / 2 / a << endl;

			cout << "x2 = " << (-b - sqrt(d)) / 2 / a << endl;

		}
		system("pause");
		
		return 0;

		break;

	case 2:

		if (a == 1)

			cout << "x ^ 2 ";

		else 
			
			if (a == -1)

			cout << " - x ^ 2 ";

		else 
			
			if (a < 0)

			cout << "- " << fabs(a) << " * x ^ 2 ";

		else 
			
			if (a > 1)

			cout << a << " * x ^ 2 ";

		if (b == 1)

			cout << "+ x";

		else 
			
			if (b == -1)

			cout << "- x";

		else 
			
			if (b == 0)

			cout << " ";

		else
			
			if (b > 0)

			cout << " + " << b << " * x ";

		else 
			
			if (b < 0)

			cout << " - " << fabs(b) << " * x ";

		if (c > 0)

			cout << " + " << c << " = 0";

		if (c == 0)

			cout << " = 0";

		if (c < 0) {

			cout << " - " << fabs(c) << " = 0";

			return 0;

			break;

	default:

		cout << "Input error" << endl;

		return 0;

		}
		system("pause");
	}

	return 0;

}