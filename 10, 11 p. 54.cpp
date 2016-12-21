#include <iostream>

using namespace std;


const int N = 256;

bool Alphabet(char ch);

bool Vowel(char ch);

void Making(char s[], char arr[][N], int& k);

void Display(char arr[][N], int n);

int Length(char str[]);


int main()

{

	int k = 0;

	char s[N] = { "Minsk is the capital of Belarus" };

	char arr[N][N] = { '0' };

	cout << s << endl;

	Making(s, arr, k);

	cout << "All words starting and ending in vowels\n";

	Display(arr, k);

	return 0;

}



int Length(char str[])

{

	int length = 0;

	while (str[length])

	{

		length++;

	}

	return length;

}



bool Alphabet(char ch)

{

	if (ch >= 'A'&& ch <= 'Z' || ch >= 'a'&& ch <= 'z')

		return true;

	else return false;

}



bool Vowel(char ch)

{

	if (ch == 'A' || ch == 'E' || ch == 'Y' || ch == 'U' || ch == 'I' || ch == 'O' || ch == 'a' || ch == 'e' || ch == 'y' || ch == 'u' || ch == 'i' || ch == 'o')

		return true;

	else return false;

}



void Making(char s[], char arr[][N], int& k)

{

	bool flag = false; int i = -1, j = 0;

	while (s[++i])

	{

		if (Alphabet(s[i]))

		{

			flag = true;

			arr[k][j] = s[i];

			j++;

			continue;

		}

		if (flag)

		{

			flag = false;

			k++;

			j = 0;

		}

	}

}



void Display(char arr[][N], int n)

{

	for (int j = 0, i = 0; j <= n; j++)

	{



		if (Vowel(arr[j][i]) && Vowel(arr[j][Length(arr[j]) - 1]))

			cout << arr[j] << endl;

	}

}