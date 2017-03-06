// zelent rekurencja.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//rekurencja - sytuacja kiedy funkcja wywo³uje sam¹ siebie

int f(int n)
{
	if (n == 0) return 3;
	else return f(n - 1) + 2;
}

long int potega(int p, int w)
{
	if (w == 0) return 1;
	else return p*potega(p, w - 1);
}

long int fib(int n)
{
	if (n == 1 || n == 2) return 1;
	else return fib(n - 1) + fib(n - 2);
}

long int silnia(int n)
{
	if (n == 1) return 1;
	else return n*silnia(n - 1);
}
int main()
{
	int c, r;
	c = 10;
	r = 5;
	int **tablica = new int*[r]; // tablica dwuwymiarowa
	for (int i = 0; i < r; i++)
	{
		tablica[i] = new int[c];
		for (int j = 0; j < c; j++)
		{
			tablica[i][j] = j;
		}
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << tablica[i][j] << ' ';
		}
		cout << endl;
	}
	cout << potega(5, 3) << endl;
	cout << fib(6) << endl;
	cout << silnia(4) << endl;
    return 0;
}

