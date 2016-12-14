#include <iostream>

using namespace std;

int main() 
{
	int a;

    cout << "Enter the nubmer" << endl;

	cout << "a = ";

	cin >> a;

	if ((a < 1) || (a >= 100))

	{

		cout << "Error, try again, please" << endl;

		return 0;

	}

	if ((a >= 10) && (a < 20))

	{

		switch (a) 
	{

		case 10: cout << "Ten ";

			break;

		case 11: cout << "Eleven ";

			break;

		case 12: cout << "Twelve ";

			break;

		case 13: cout << "Thirteen ";

			break;

		case 14: cout << "Fourteen ";

			break;

		case 15: cout << "Fifteen ";

			break;

		case 16: cout << "Sixteen ";

			break;

		case 17: cout << "Seventeen ";

			break;

		case 18: cout << "Eighteen ";

			break;

		case 19: cout << "Nineteen ";

			break;

	}

	}

	else

	{

		switch (a / 10) 
	
	{

		case 2: cout << "Twenty";

			break;

		case 3: cout << "Thirty";

			break;

		case 4: cout << "Fourty";

			break;

		case 5: cout << "Fifty";

			break;

		case 6: cout << "Sixty";

			break;

		case 7: cout << "Seventy";

			break;

		case 8: cout << "Eighty";

			break;

		case 9: cout << "Ninety";

			break;

	}

		switch (a % 10) 
	
	{

		case 1: cout << "One" << endl;

			break;

		case 2: cout << "Two" << endl;

			break;

		case 3: cout << "Three" << endl;

			break;

		case 4: cout << "Four" << endl;

			break;

		case 5: cout << "Five" << endl;

			break;

		case 6: cout << "Six" << endl;

			break;

		case 7: cout << "Seven" << endl;

			break;

		case 8: cout << "Eight" << endl;

			break;

		case 9: cout << "Nine" << endl;

			break;

	}

	}

	cout << "Press any key to repeat" << endl;
	system ("pause");
	return 0;

}