#include <iostream>
using namespace std;
int main()
{
	int n;
	while(1)
	{
		cin >> n;
		if ( n<1 ) 
			cout << "error";
		else if (n==1)
			cout << "1";
		else
			cout << "1 + x";
			for(int i=2;i<n;i++)
				cout << " + x^" << i << " /" << i << "!" ;
		cout << endl;
	}
	return 0;
}

