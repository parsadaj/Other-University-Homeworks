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
	char dir[300];
	cout << "addrese 2 file havi adad ra vared konid.\nbaraye mesal: C:\\MyFolder\\file.txt\nbe khater dashte bashid! :\ndar surati ke dar har ghesmat az barname adrese eshtebahi vared shavad,\nbarname hich masuliati dar ghebale dorost kar kardan be ohde nemigirad\n";
	cin.getline(dir,300);
	ifstream file1(dir);
	cin.getline(dir,300);
	ifstream file2(dir);
	cout << "mohasebate anjam shode dar file hayi dar mahale gharar girie barname zakhire shod.\n";


	ofstream mul("zarb.txt");
	ofstream add("jam.txt");
	ofstream sub("tafrigh.txt");
	ofstream div("taghsim.txt");
	char num[] = {'0', '1', '2', '3', '4', '5','6', '7', '8', '9', 'a', 'b','c', 'd', 'e', 'f', 'g', 'h','i', 'j', 'k', 'l', 'm', 'n','o', 'p', 'q', 'r', 's', 't','u', 'v', 'w', 'x', 'y', 'z' };
	long double A=0,B=0,qq,q;
	char k;
	char* p;
	int base1=10,base2=10;
	
	
	file1 >> base1;
	if (base1 >36||base1<2)
	{
		cout << "mabna dar mahdude nist!" << endl;
		return 0;
	}
	for(int i=0;;i++)
		{
			k = ' ';
			file1 >> k;
			p = strchr(num,k);
			if(p-num<36&&p-num>-1)
			{
				if(p-num>=base1)
				{
					cout << "ragham vared shode ba mabna hamkhani nadarad!"<<endl;
					return 0;
				}
				A += (p-num)*pow(base1,i);
			}
			else break;
		}












	file2 >> base2;
	if (base2 >36||base2<2)
	{
		cout << "mabna dar mahdude nist" << endl;
		return 0;
	}
	for(int i=0;;i++)
	{
		k = ' ';
		file2 >> k;
		p = strchr(num,k);
		if(p-num<36&&p-num>-1)
		{
			if(p-num>=base2)
			{
				cout << "ragham vared shode ba mabna hamkhani nadarad!"<<endl;
				return 0;
			}
			B += (p-num)*pow(base2,i);
		}
		else break;
	}

	//jam
	int *a=new int[TA(A+B)];
	qq=(A+B);
	for (int i=0; i<TA(A+B);i++)
	{
		q = 10*floor(qq/10);
		a[i]=qq-q;
		qq=floor(qq/10);
	}
	add<<"A+B=";
	for (int i=TA(A+B)-1;i>=0;i--)
	{
		add << a[i];
	}

		//zarb
	int *b=new int[TA(A*B)];
	qq=(A*B);
	for (int i=0; i<TA(A*B);i++)
	{
		q = 10*floor(qq/10);
		b[i]=qq-q;
		qq=floor(qq/10);
	}
	mul<<"A*B=";
	for (int i=TA(A*B)-1;i>=0;i--)
	{
		mul << b[i];
	}

		//tafrigh
	long double C= (A>B ? A-B : B-A);
	int *c=new int[TA(C)];
	qq=C;
	for (int i=0; i<TA(C);i++)
	{
		q = 10*floor(qq/10);
		c[i]=qq-q;
		qq=floor(qq/10);
	}
	sub<<"|A-B|=";
	for (int i=TA(C)-1;i>=0;i--)
	{
	 sub << c[i];
	}


		//taghsim
	long double D= (A>B ? A/B : B/A);
	int *d=new int[3+TA(D)];
	qq=1000*D;
	for (int i=0; i<TA(D)+3;i++)
	{
		q = 10*floor(qq/10);
		d[i]=qq-q;
		qq=floor(qq/10);
		
	}
	
	if(A>=B)
		div<<"A/B=";
	else 
		div<<"B/A=";
	for (int i=TA(D)+2;i>=3;i--)
	{
		div << d[i];
	}
	div<<'.';
	for (int i=2;i>=0;i--)
	{
		div << d[i];
	}





	
	
	return 0;
}

