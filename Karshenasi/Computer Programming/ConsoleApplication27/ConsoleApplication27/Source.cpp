#include <iostream>
#include <algorithm>

using namespace std;

int calcPrice(long int c[], int s, int f);
int main()
{
	int n;
	cin >> n;
	long int *c= new long int [n];
	
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	int price = calcPrice(c, 0, n - 1);
	cout << price;
	return 0;
}

int calcPrice(long int c[], int s, int f)
{
	int price = 0;

	if (f - s < 0) {
		price = 0;
	} else if (f - s == 0) {
		price = c[s];
	} else {
		int i, place = s;
		long int min = c[s];
		for (i = s; i <= f; i++) {
			if (c[i] <= min) {
				min = c[i];
				place = i + 1;
			}
		}
		price = (c[place - 1] * (place - s)) + calcPrice(c, place, f);
	}
	return price;
}
