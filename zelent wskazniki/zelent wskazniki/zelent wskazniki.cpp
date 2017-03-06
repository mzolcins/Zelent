// zelent wskazniki.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

float srednia(float *tab, int ile)
{
	float suma = 0;
	for (int i = 0; i < ile; i++)
	{
		suma += *tab;
		*tab = 99;
		*tab++;
	}
	//suma = suma / ile;
	return suma / ile;
}

int main()
{
	/*float tablica[3] = { 1.5, 2.3, 0.75 };
	float *wskaznik = tablica;
	for (int i = 0; i < 3; i++)
	{
		cout << *wskaznik << endl;
		wskaznik++;
	}
	cout << "Srednia wynosi:" << srednia(tablica, 3)<<endl;
	cout << tablica[0] << endl;
	cout << tablica[1] << endl;
	cout << tablica[2] << endl;
	*/


    return 0;
}

