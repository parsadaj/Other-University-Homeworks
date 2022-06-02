// ConsoleApplication17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int TA(long double n) // tabe i tarif mikonim ke tedad argham yek adad sahih ra mohasebe konad
{
	int b=0;
	for (long double a=n;a>=1;a=a/10)
	{
				b=b+1;
	}
	return b;
}
int main()
{
	long double A=11*121;
	long double q;
	long double qq=A;
	long double* a= new long double[TA(A)];
	for (int i=0; i<TA(A);i++)
	{
		q = 10*floor(qq/10);
		a[i]=qq-q;
		qq=floor(qq/10);
	}
	for(int j =0;j<TA(A);j++)
		cout << a[j];
	cout << endl;
	cout << "2582249878086908589655919172003011874329705792829223512830659356540647622016841194629645353280137831435903171972747493376" << endl;
	cout << "\\\ ";
}
