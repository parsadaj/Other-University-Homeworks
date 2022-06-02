#include <iostream>
using namespace std;
void read(int[],int&, const int &);
void print(int[],int);
int main()
{
	const int MAXSIZE=100;
	int a[MAXSIZE]={0}, size;
	read(a,size, MAXSIZE);
	cout << "The array has " << size << " elements: ";
	print(a,size);
	cout << "\na[99]="<< a[99]<<endl;
}
void read(int a[], int& n, const int & MAXSIZE) 
{
	cout << "Enter integers. Terminate with 0:\n";
	n = 0;
	do 
	{
		cout << "a[" << n << "]: ";
		cin >> a[n];
	}
	while(a[n++] !=0 && n < MAXSIZE);
	--n;
}
void print(int a[], int n)
{
	for (int i=0; i<n; i++) 
		cout << a[i] << " ";
}
