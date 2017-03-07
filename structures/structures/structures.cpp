// structures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct osoba
{
	string imie;
	string nazwisko;
	int wiek;

};

int main()
{
	int i = 0;
	int ile;
	cout << "Podaj ile:";
	cin >> ile;
	osoba *numer = new osoba[ile];
	for (i = 0; i < ile; i++)
	{
		cout << "podaj imie: ";
		cin >> numer[i].imie;
		cout << "podaj nazwisko: ";
		cin >> numer[i].nazwisko;
		cout << "podaj wiek: ";
		cin >> numer[i].wiek;
	}
	for (i = 0; i < ile; i++)
	{
		cout << "Osoba[" << i << "]'s imie=" << numer[i].imie << endl;
		cout << "Osoba[" << i << "]'s nazwisko=" << numer[i].nazwisko << endl;
		cout << "Osoba[" << i << "]'s wiek=" << numer[i].wiek << endl;
	}
	delete[] numer;
    return 0;
}

