#include <iostream>
using namespace std;

int main()
{
	const int p = 10^5;
	int javab=0,a=0,t=0;
	char ch;
	char s[p];
	int flag[p];
	for(int y =0 ; y<p ;y++)
		flag[y] =0;
	for (int h =0;h<p;h++)
	{
		cin.get(ch);
		if (ch == '\n')	break;
		s[h] = ch;
	}
	for (int i =0;i<p;i++)
	{
		if (s[i] == '(') 
				for(int j=0 ;j<p;j++)
					if ( flag[j] == 0 ) 
					{
						flag[j] =1;
						break;
					}
		if (s[i] == ')') 
				for(int l=p-1 ;l>-1;l--)
					if ( flag[l] == 1 ) 
					{
						flag[l] =0;
						break;
					}

	}

	for (int k = 0;k<p;k++)
		if ( flag[k] == flag [k+1] && flag[k]==1 )
			javab++;
		cout << javab;
		return 0;
}


