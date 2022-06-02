#include <iostream>
using namespace std;

 long double tavan(long double x,long double y) // tarife tabe e tavan
{
	long double javab=1;
	for(int i=1;i<=y;i++)
	{
		javab = javab * x;
	}
	return javab;
}

 int main()
 {
	 int a,b;
	 cin >> a >> b;
	 cout << "a = " << a << endl << "b = " << b << endl << "a^b = " << tavan(a,b) << endl ;
	 return 0;
 }