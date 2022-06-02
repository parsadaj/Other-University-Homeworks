// Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


// FinalProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstring>
#include <string>
#include <iostream>
#include <fstream>
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
	ifstream file1("C:\\Users\\Paras\\Documents\\Visual Studio 2012\\Projects\\FinalProject\\FinalProject\\File1.txt");
	ifstream file2("C:\\Users\\Paras\\Documents\\Visual Studio 2012\\Projects\\FinalProject\\FinalProject\\File2.txt");
	char num[] = {'0', '1', '2', '3', '4', '5','6', '7', '8', '9', 'a', 'b','c', 'd', 'e', 'f', 'g', 'h','i', 'j', 'k', 'l', 'm', 'n','o', 'p', 'q', 'r', 's', 't','u', 'v', 'w', 'x', 'y', 'z' };
	double A=0,B=0;
	char k;
	int tedad1=-1,tedad2=-1;
	char* p;
	double base1=10,base2=10;
	file1 >> base1;
	if (base1 >36||base1<2)
	{
		cout << "mabna dar mahdude nist!" << endl;
		return 0;
	}
	for(int i=0;;i++)
	{
		tedad1++;
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
		
		}
		else break;

	}
	int* a= new int[10000][10000];
	cout <<"tedad1=" << tedad1 << endl;








	file2 >> base2;
	if (base2 >36||base2<2)
	{
		cout << "mabna dar mahdude nist" << endl;
		return 0;
	}
	for(int i=0;;i++)
	{
		tedad2++;
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
		
		}
		else break;
	}
	int* b= new int[tedad2][1000]
	cout <<"tedad2=" << tedad2 << endl;
	return 0;
}

