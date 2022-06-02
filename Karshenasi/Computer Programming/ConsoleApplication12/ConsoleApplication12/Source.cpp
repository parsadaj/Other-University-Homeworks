#include <iostream>
using namespace std;
int& max(int& m, int& n)
{ 
	return (m > n ? m : n);
} 
void main() 
{
	int a=1,b=2;
	int x=max(a,b);
	cout << x;
	max(a,b)=3;
	cout <<a <<b<<max(a,b);
}
