#include <iostream>
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
	int n,p;
	int sum=0;
	while(1)
	{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		p=1/fact(n);
		sum=sum+p;
	}

	
	cout << sum << endl;
	}
}


