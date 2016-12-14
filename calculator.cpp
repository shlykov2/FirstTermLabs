#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	char op;
	cout << "You are able to choose the option. Press (+) ,or (-) ,or (*) ,or (/)." << endl;
	cin >> op;
	system("cls");
	cout << "Now enter the numbers" << endl;
	cout << "Fisrt one" << endl;
	cin >> a;
	cout << "Second one" << endl;
	cin >> b;
	bool ok = true;
	switch (op)
	{
	case ' + ':
		c = a + b;
		break;
	case ' - ':
		c = a - b;
		break;
	case ' * ':
		c = a * b;
		break;
	case ' / ':
		if (b == 0)
		{
			ok = false;
		}
		else
		{
			c = a / b;
			break;
		}
	 default: 
		ok = false;
	}
	if (ok == true)
	{
		cout << c << endl;
	}
	else
	{
		cout << "Error." << endl;
	}
}