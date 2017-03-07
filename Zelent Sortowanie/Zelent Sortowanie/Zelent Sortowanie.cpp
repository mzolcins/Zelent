// Zelent Sortowanie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void bubble_inc(int *tab, int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = n - 1; j >= 1; j--)
		{
			if (tab[j] < tab[j - 1])
			{
				int bufor; 
				bufor = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = bufor;
			}
		}
	}
}
void bubble_dec(int *tab, int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = n - 1; j >= 1; j--)
		{
			if (tab[j] > tab[j - 1])
			{
				int bufor;
				bufor = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = bufor;
			}
		}
	}
}

void quicksort_inc(int *tablica, int lewy, int prawy)
{
	int v = tablica[(lewy + prawy) / 2];
	int i, j, x;
	i = lewy;
	j = prawy;
	do {
		while (tablica[i]<v) i++;
		while (tablica[j]>v) j--;
		if (i <= j) {
			x = tablica[i];
			tablica[i] = tablica[j];
			tablica[j] = x;
			i++; j--;
		}
	} while (i <= j);
	if (j>lewy) quicksort_inc(tablica, lewy, j);
	if (i<prawy) quicksort_inc(tablica, i, prawy);
}

void quicksort_dec(int *tablica, int lewy, int prawy)
{
	int v = tablica[(lewy + prawy) / 2];
	int i, j, x;
	i = lewy;
	j = prawy;
	do {
		while (tablica[i]>v) i++;
		while (tablica[j]<v) j--;
		if (i <= j) {
			x = tablica[i];
			tablica[i] = tablica[j];
			tablica[j] = x;
			i++; j--;
		}
	} while (i <= j);
	if (j<lewy) quicksort_dec(tablica, lewy, j);
	if (i>prawy) quicksort_dec(tablica, i, prawy);
}

int main()
{
	int ile;
	cout << "Podaj ile:";
	cin >> ile;
	int *tab = new int[ile];
	for (int i = 0; i < ile; i++)
	{
		cin >> tab[i];
	}
	for (int i = 0; i < ile; i++)
	{
		cout << "tab[" << i << "]=" << tab[i] << endl;
	}
	cout <<"Babelkowe decreasing"<<endl;
	bubble_dec(tab, ile);
	for (int i = 0; i < ile; i++)
	{
		cout << "tab[" << i << "]=" << tab[i] << endl;
	}
	cout <<"Babelkowe increasing"<< endl;
	bubble_inc(tab, ile);
	for (int i = 0; i < ile; i++)
	{
		cout << "tab[" << i << "]=" << tab[i] << endl;
	}
	cout <<"Quicksort decreasing"<< endl;
	quicksort_dec(tab, 0, ile - 1);
	for (int i = 0; i < ile; i++)
	{
		cout << "tab[" << i << "]=" << tab[i] << endl;
	}
	cout <<"Quicksort increasing"<< endl;
	quicksort_inc(tab, 0, ile - 1);
	for (int i = 0; i < ile; i++)
	{
		cout << "tab[" << i << "]=" << tab[i] << endl;
	}
	delete[] tab;
	return 0;
}

