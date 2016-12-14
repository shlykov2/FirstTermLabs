#include <iostream>

using namespace std;

long Factorial(int);

int main() 

{

	cout << "Enter the number" << endl;

	int n;

	cin >> n;

	cout << "Factorial (" << n << ") = " << Factorial(n) << endl;

	system("pause");

	return 0;

}



long Factorial(int n) 

{
	
	if (n == 0 || n == 1)

		return 1;

	return n * Factorial(n - 1);

}