#pragma once 

#ifndef SORT_H
#define SORT_H
#include <windows.h>    
#include "Air.h"


template<class T >
void coutarray(T* a, int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}

}


template<class T>
void Sprnt(T* a) {
	string t = "";
	T b = a;
	a = t;
	cout << a;
	a = b;
}

void rus(int r) {
	if (r == 1) {
		SetConsoleCP(1251);         
	}
	else { SetConsoleOutputCP(1251); } 
}


template<class T>
void search(string pt, T* a, int n) {
	int k = 0;
	T Y;
	for (int i = 0; i < n; i++) {
		if (Y == a[i]) { Sprnt(a[i]); k = 1; }
	}

	if (k == 0) { cout << ""В данный пункт назначения рейсов нет.\n"; }
}



template<class T>
void Bubble(T* a, int n) {

	T h;
	for (int z = 0; z < n - 1; z++) {

		for (int i = 0; i < n - 1; i++) {
			if (a[i] > a[i + 1]) {
				h = a[i]; a[i] = a[i + 1]; a[i + 1] = h;
			}

		}

	}
	cout << "Отсортированый массив по номеру рейса:\n";
	coutarray(a);


}


template<class T>
void Inserts(T* a, int n)
{


	T h;
	int j = 0;

	for (int i = 1; i < n; i++)
	{
		h = a[i];
		j = i;
		while ((j >= 1) && (a[j - 1] > h))
		{
			a[j] = a[j - 1];
			j = j - 1;

		}

		a[j] = h;
	}

	cout << "Отсортированый массив по номеру рейса:\n";
	coutarray(a);


};


template<class T>
void Selection(T* a, int n)
{
	T max; int k;
	for (int j = n - 1; j >= 1; j--)
	{
		max = a[j];
		for (int i = 0; i < j + 1; i++)
		{
			if (a[i] > max) { max = a[i]; k = i; }

		}
		a[k] = a[j];  a[j] = max;


	}

	cout << "Отсортированый массив по номеру рейса:\n";
	coutarray(a);


}


template<class  T>
void Shell(T* a, int n)
{
	T h;
	int d = 3;
	while (d > 0) {
		for (int i = 0; i + d < n; i++)
		{
			if (a[i] > a[i + d]) {
				h = a[i];
				a[i] = a[i + d];
				a[i + d] = h;
			}

		}
		d = d / 2;

	}


	cout << "Отсортированый массив по номеру рейса:\n";
	coutarray(a);

}





template<class T>
void Hoar(T* a, int b, int c) {


	int i = b, j = c;
	T h, x = a[(i + j) / 2];

	do {
		while (a[i] < x)
			i++;
		while (a[j] > x)
			j--;

		if (i <= j)
		{
			if (i < j)
			{
				h = a[i];
				a[i] = a[j];
				a[j] = h;
			}
			i++;
			j--;
		}
	} while (i <= j);

	if (i < c)
		Hoar(a, i, c);
	if (b < j)
		Hoar(a, b, j);






}


#endif
