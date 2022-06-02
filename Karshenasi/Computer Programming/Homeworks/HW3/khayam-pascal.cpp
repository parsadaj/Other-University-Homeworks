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

//int main() // azmun baraye tabe e fact
//{
//	int n;
//	while(1)
//	{
//		cin >> n;
//		cout << fact(n)<<endl;
//	}
//return 0;
//}

int c(int n , int k ) // tarife tabe e entekhabe k az n ya haman c(n,k)
{
	if (n<0 || k<0 || n<k) return 0;
	else if (n==0 || k==0 || n==k ) return 1;
	else return fact(n)/fact(k)/fact(n-k);
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

int TA(int n) // tabe i tarif mikonim ke tedad argham yek adad sahih ra mohasebe konad
{
	int b=0;
	for (int a=n;a!=0;a=a/10)
	{
				b=b+1;
	}
	return b;
}

//int main() // azmun baraye tabe e TA
//{
//	int n;
//	while (1)
//	{
//	cin >> n;
//	cout << TA(n)<<endl;
//	}
//}


int main()
{
	int n=1;
	cout << "lotfan adadi tabii vared konid ta be andaze an az mosalase khayam pasqual satr daryaft konid" << endl << "baraye mesal ba vared kardane adade 5 , 5 satr az mosalase khayam pasqual ra khahid did" << endl <<"dar har lahze baraye khuruj az barname mitavanid adade 0 ra vared konid"<< endl;
	while(n!=0) // ta vaghti karbar adade  0 ra vared nakonad barname adadi daryaft mikonad ta be tedade an satr az mosalase khayam pasqual ra namayesh dahad
	{
	
	cin >> n ;
	for(int i=0;i<n;i++)
	{
		for(int k=1;k<3*(n-i)-2;k++)
		{
			cout << " ";
		}
		for(int j=0;j<=i;j++)
		{
			cout << c(i,j);
		    int h=c(i,j);
			for(int c=1;c<7-TA(h);c++)
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	}
 return 0;
}