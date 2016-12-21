#include <iostream>
#include <conio.h>

using namespace std;

void Swap(int& a, int& b);

int main()
{

	int const N = 4, M = 4;

	int matrix[N][M];



	for (int i = 0; i < N; i++)



	{



		for (int j = 0; j < M; j++)



		{



			cout << "[" << (i + 1) << "][" << (j + 1) << "] = ";



			cin >> matrix[i][j];



		}



	}




	for (int i = 0; i < n; i++)

		for (int j = 0; j < m / 2; j++)

			Swap(matrix[i][j], matrix[i][m - j - 1]);



		for (int i = 0; i < N; i++)



		{



			for (int j = 0; j < M; j++)



			{



				cout.width(5);



				cout << matrix[i][j];



			}



			cout << endl;



		}

	}


void Swap(int& a, int& b)

{

	int t = a;

	a = b;

	b = t;

}