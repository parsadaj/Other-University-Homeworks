// FinalProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstring>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
int TA(double n) // tabe i tarif mikonim ke tedad argham yek adad sahih ra mohasebe konad
{
	int b=0;
	for (double a=n;a>=1;a=a/10)
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
	ifstream file1("File1.TXT");
	ifstream fileyek("File1.TXT");
	ifstream file2("File2.TXT");
	char numbers[] = {'0', '1', '2', '3', '4', '5','6', '7', '8', '9', 'a', 'b','c', 'd', 'e', 'f', 'g', 'h','i', 'j', 'k', 'l', 'm', 'n','o', 'p', 'q', 'r', 's', 't','u', 'v', 'w', 'x', 'y', 'z' };
	double A=0,B=0;
	char* p;
	string str;
	int count=0; base1=10,base2=10;
	file1 >> base1;
	if (base1 >36||base1<2)
	{
		cout << "mabna dar mahdude nist!" << endl;
		return 0;
	}
	for(int i=0;;i++)
		{
			k = ' ';
			fileyek >> k;
			
			if(p-numbers<36&&p-numbers>-1)
			{
				count++;
			}
			else break;
		}

	for(int i=0;;i++)
		{
			k = ' ';
			file1 >> k;
			p = strchr(numbers,k);
			if(p-numbers<36&&p-numbers>-1)
			{
				if(p-numbers>=base1)
				{
					cout << "ragham vared shode ba mabna hamkhani nadarad!"<<endl;
					return 0;
				}
				A += (p-numbers)*pow(base1,i);
			}
			else break;
		}
	int i=0,qq;
	cout << "A=" << A<<endl;







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
		p = strchr(numbers,k);
		if(p-numbers<36&&p-numbers>-1)
		{
			if(p-numbers>=base2)
			{
				cout << "ragham vared shode ba mabna hamkhani nadarad!"<<endl;
				return 0;
			}
			B += (p-numbers)*pow(base2,i);
		}
		else break;
	}
	cout << "B=" << B<<endl;
	cin >> k;
	return 0;
}

