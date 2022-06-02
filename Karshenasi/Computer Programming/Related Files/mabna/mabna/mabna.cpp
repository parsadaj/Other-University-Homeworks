// ConsoleApplication38.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;


int main()
{
	long double A=0,B=0,N;
	char M[80];
	char numbers[] = {
		'0', '1', '2', '3', '4', '5',
		'6', '7', '8', '9', 'a', 'b',
		'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'n',
		'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z' };

	cout << "Enter base of A.\n";
	cin >> N;
	cout << "Now enter A from right to left.\n";
	int L = strlen(M);

	char ch;
	for (;;)
	{
		for(int i=0;i<5;i++)
		{
			cin.get(ch);
			M[i]=ch;
		}
		if (*M) cout << "(" << M << ")\n";
		else break;
	}


	for (int I=0; I < L; I++)
	{
		char* P = strchr(M, M[I]);
		A += (P - M)*pow(N, I);
		if (I == strlen(M))
			cout << "A = " << A << endl;
	}
	

	return 0;
}

