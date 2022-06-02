#include <iostream>
using namespace std;

long int fact(int x) // tarife tabe e factoriel
{
	long int fact=1;
	for(int i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	return fact;
}

int main() // azmun baraye tabe e fact
{
	long int n;
	while(1)
	{
		cin >> n;
		cout << fact(n)<<endl;
	}
return 0;
}

int c(int n , int k ) // tarife tabe e entekhabe k az n ya haman c(n,k)
{
	return fact(n)/( fact(k)*fact(n-k));
}

//int main() // azmun baraye tabe e c(n,k)
//{
//	int n,k;
//	while(1)
//	{
//		cin >> n>>k;
//		cout << c(n,k)<<endl;
//	}
//	return 0;
//}