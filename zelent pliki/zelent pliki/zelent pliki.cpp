// zelent pliki.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

string imie, nazwisko;
int tel;

int main()
{
	/*cout << "Imie:"; 
	cin >> imie;
	cout << "Nazwisko:"; 
	cin >> nazwisko;
	cout << "Nr tel:"; cin >> tel;*/

	fstream plik;
	/*plik.open("wizytowka.txt", ios::out | ios::app);
	plik << imie << endl;
	plik << nazwisko << endl;
	plik << tel << endl;
	plik.close();*/
	plik.open("wizytowka.txt", ios::in);
	if (plik.good() == false)
	{
		cout << "Plik nie istnieje";
		exit(0);
	}
	string linia;
	int nr_linii = 1;
	while (getline(plik, linia))
	{
		switch (nr_linii)
		{
		case 1: imie = linia; break;
		case 2: nazwisko = linia; break;
		case 3: tel = atoi(linia.c_str()); break;
		}
		nr_linii++;
	}
	plik.close();
	cout << imie << endl;
	cout << nazwisko << endl;
	cout << tel << endl;
	return 0;
}

