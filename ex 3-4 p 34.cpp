#include <iostream>
#include <conio.h>

using namespace std;

void TypeOfTheArray(int A[11]);
void Mirror(int A[11]);
void Swap(int& a, int& b);

int main()
{
	int A[11];
	
	cout << "Enter the array\n";

	for (int i = 0; i < 11; i++)
	{
		   cout << "Enter " << i << "'s element: ";
		   while(!(cin  >>  A[i]))
		   {
			   cin.clear();
			   while(cin.get() != '\n');
			   cout << "Enter " << i << "'element: ";
		   }
	}
	
	system("cls");
	
	int option;

	cout << "Choose the option (1 or 2): \n";
	
	cin >> option;

	switch (option)
	{
	   case '1': void TypeOFTheArray(int A[11]);
		   //break;
	  
	   case '2': void Mirror(int A[11]);
		   //break;
	  
	   default:
		   cout << "There is no such an operation!\n";
	}

	_getch();
	return 0;
}

void TypeOfTheArray(int A[11])
{
	int i = 1, number = 0;
	bool equals = false, less = false, greater = false;
	
	while (i < 11)
	{
		if (A[number] > A[i])
			less = true;
		else if (A[number] < A[i])
			greater = true;
		else if (A[number] = A[i]);
		    equals = true;
			number++;
			i++;
	}
	if (less && !equals)
		cout << "Your array is strictly deacrising\n";
	else if (less && equals)
		cout << "Your array is deacrising\n";
	else if (greater && !equals)
		cout << "Your array is strictly increasing\n";
	else if (greater && equals)
		cout << "Your array is increasing\n";
}


void Mirror(int A[11])
{
	for (int i = 0; i < 5 / 2; i++)
	{
		Swap(A[i], A[10 - i - 1]);
	}

	cout << "Mirrored array is: \n";

	for (int i = 0; i < 10; i++)
		cout << "A[" << i << "] = " << A[i] << endl;

}


void Swap(int& a, int& b)

{

	int t = a;

	a = b;

	b = t;

}
