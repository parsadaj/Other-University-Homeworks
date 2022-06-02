// sh.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// ConsoleApplication38.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;


int main()
{
	long double A = 0, B = 0;
	char M[80], C[36],
		numbers[] = {
		'0', '1', '2', '3', '4', '5',
		'6', '7', '8', '9', 'a', 'b',
		'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'n',
		'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z' };


	ifstream S("file1.TXT");
	long N;
	//string K;
	//cout << "Enter base of A.\n";
	int L = strlen(M);

	S >> N;
	if (N<2 || N>37)
	{
		cout << "It`s out of range of base.";
		return 0;
	}

	
	strncpy_s(C, numbers, N);

	long double sum = 0;
	char* p;
	char j=0;

	for (int i=0;i<4;i++)
	{
		S >> j;
		p = strchr(C, j);
		sum += (p - C)*pow(N,i);
		
	}
	A = sum;
	cout << A;

	/*for (int I=0; I < L; I++)
	{
		char* P = strchr(M, M[I]);
		A += (P - M)*pow(N, I);
		if (I == strlen(M))
			cout << "A = " << A << endl;
	}*/
	

	return 0;
}


