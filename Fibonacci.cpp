#include <iostream>

using namespace std;

int main() 

{

	int num, a = 0;

	do 
	
	{

		num = fibonachy(a);

		a++;

	}
	
	while (num < 99);

	cout << "Min - " << num << endl;

	system("pause");

	return 0;

}

int fibonachy(int b = 20) 

{

	int a;

	long l = 0, n = 1, m = 1;

	for (a = 1; a <= (b - 2); a++) 
	
	{

		l = n + m;

		n = m;

		m = l;

	}

	return l;

}