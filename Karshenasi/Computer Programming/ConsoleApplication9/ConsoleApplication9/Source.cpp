#include <iostream>
using namespace std;
void index(int,int[],int);
int main()
{
	int a[]={22,44,66,80,44,66,55};
	cout << "index(44,a,7)= " ;
	index(44,a,7); 
	cout  << endl;
	cout << "index(50,a,7)= " ; 
	index(50,a,7);
	cout  << endl;
}
void index(int x,int a[],int n)
{
	int k=0;
	for(int i=0;i<n;i++)
	{
		if (a[i]==x)
		{
				cout << i << " ";
				k++;
		}
	}
	if (k==0) 
			cout << n;
}

	