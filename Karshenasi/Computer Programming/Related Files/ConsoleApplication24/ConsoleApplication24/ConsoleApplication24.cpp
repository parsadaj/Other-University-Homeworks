
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout << "yek donbale az parantez ha vared konid\n";
	const int p = 10^5;
	int javab=0,a=0,t=0;
	char ch;
	char s[p];
	for (int i =0;i<p;i++)
	{
		cin.get(ch);
		if (ch != ')' && ch != '(' && ch != '\n')
		{
			cout << " faghat mitavanid character haye ) va ( ra vared konid \n" ;
			return 0 ;
		}
		if (ch == '\n')	break;
		s[i] = ch;
		t++;
	}
	if ( t%2==1)
		{
			cout << "tedad character haye vared shode bayad zoj bashad\n";
			return 0 ;
		}


	{
		for (int j=0;j<p; j++ )
		{
			if (s[j] == '(')
				a++;
			if (s[j] == ')')
				a--;
		}
	}
	if ( a==0) javab =0;
	if ( a<0) javab = a*(-1)/2;
	if (a>0) javab = a/2;

	cout << javab << " parantez bayad bar aks shavad. \n" ;
	getch();
	return 0;
}