// FinalProject.cpp : Defines the entry point for the console application.
//
#pragma warning (disable: 4996)
#include "stdafx.h"
#include <cstring>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
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

//int main() // azmun baraye tabe e TA
//{
//	double n;
//	while (1)
//	{
//	cin >> n;
//	cout << TA(n)<<endl;
//	}
//}


int main()
{
	int shomar=0;
	char ch='1';
	char dir[300];
	char zarb[309];
	char jam[308];
	char tafrigh[312];
	char taghsim[312];
	cin.get(ch);
	while(ch!='\n')
	{
		dir[shomar]=ch;
		jam[shomar]=ch;
		tafrigh[shomar]=ch;
		taghsim[shomar]=ch;
		zarb[shomar]=ch;
		shomar++;
		cin.get(ch);
	}
	//zarb
	zarb[shomar]='\\';
	zarb[shomar+1]='z';
	zarb[shomar+2]='a';
	zarb[shomar+3]='r';
	zarb[shomar+4]='b';
	zarb[shomar+5]='.';
	zarb[shomar+6]='t';
	zarb[shomar+7]='x';
	zarb[shomar+8]='t';

	//jam
	jam[shomar]='\\';
	jam[shomar+1]='j';
	jam[shomar+2]='a';
	jam[shomar+3]='m';
	jam[shomar+4]='.';
	jam[shomar+5]='t';
	jam[shomar+6]='x';
	jam[shomar+7]='t';

	//tafrigh
	tafrigh[shomar]='\\';
	tafrigh[shomar+1]='t';
	tafrigh[shomar+2]='a';
	tafrigh[shomar+3]='f';
	tafrigh[shomar+4]='r';
	tafrigh[shomar+5]='i';
	tafrigh[shomar+6]='g';
	tafrigh[shomar+7]='h';
	tafrigh[shomar+8]='.';
	tafrigh[shomar+9]='t';
	tafrigh[shomar+10]='x';
	tafrigh[shomar+11]='t';
	
	//taghsim
	taghsim[shomar]='\\';
	taghsim[shomar+1]='t';
	taghsim[shomar+2]='a';
	taghsim[shomar+3]='g';
	taghsim[shomar+4]='h';
	taghsim[shomar+5]='s';
	taghsim[shomar+6]='i';
	taghsim[shomar+7]='m';
	taghsim[shomar+8]='.';
	taghsim[shomar+9]='t';
	taghsim[shomar+10]='x';
	taghsim[shomar+11]='t';
	cout <<"shomar="<<shomar<<endl;
	for(int i = 0 ; i<shomar;i++)
		cout << dir[i] ;
	cout << endl;
	for(int i = 0 ; i<shomar+9;i++)
		cout << zarb[i] ;
	cout << endl;
	for(int i = 0 ; i<shomar+8;i++)
		cout << jam[i] ;
	cout << endl;
	for(int i = 0 ; i<shomar+13;i++)
		cout << tafrigh[i] ;
	cout << endl;
	for(int i = 0 ; i<shomar+13;i++)
		cout << taghsim[i] ;
	cout << endl;
	return 0;
}