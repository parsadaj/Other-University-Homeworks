#include <iostream>
#include <cmath>
using namespace std;
int fact(int x) // tarife tabe e factoriel
{
	int fact=1;
	for(int i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	return fact;
}
void main()
{
	cout << fact(12);
}