#include <iostream><stdafx.h>
using namespace std;
int main()
{
	cout << " lotfan 10 adad vared konid : " << endl;
	float a,b,c,d,e,f,g,h,i,j,max1,max2,min1,min2 ; //adad ha mitavand sahih ya ashari bashand
	cin >> a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
    {
	if (a<b) max1=b,max2=a;else max1=a,max2=b; // adad yeki yeki moghayese shode va dar har marhale ekmane taghire bishine va dovomin bishine vujud darad
	if (max1<c) max2=max1 , max1=c ;else if (max2<c&&c<max1) max2=c;
	if (max1<d) max2=max1 , max1=d ;else if (max2<d&&d<max1) max2=d;
	if (max1<e) max2=max1 , max1=e ;else if (max2<e&&e<max1) max2=e;
	if (max1<f) max2=max1 , max1=f ;else if (max2<f&&f<max1) max2=f;
	if (max1<g) max2=max1 , max1=g ;else if (max2<g&&g<max1) max2=g;
	if (max1<h) max2=max1 , max1=h ;else if (max2<h&&h<max1) max2=h;
	if (max1<i) max2=max1 , max1=i ;else if (max2<i&&i<max1) max2=i;
	if (max1<j) max2=max1 , max1=j ;else if (max2<j&&j<max1) max2=j;
    }
	{
	if (a>b) min1=b,min2=a;else min1=a,min2=b; // adad yeki yeki moghayese shode va dar har marhale ekmane taghire kamine va dovomin kamine vujud darad
	if (min1>d) min2=min1 , min1=d;else if (min2>d&&d>min1) min2=d;
	if (min1>e) min2=min1 , min1=e;else if (min2>e&&e>min1) min2=e;
	if (min1>f) min2=min1 , min1=f;else if (min2>f&&f>min1) min2=f;
	if (min1>g) min2=min1 , min1=g;else if (min2>g&&g>min1) min2=g;
	if (min1>h) min2=min1 , min1=h;else if (min2>h&&h>min1) min2=h;
	if (min1>i) min2=min1 , min1=i;else if (min2>i&&i>min1) min2=i;
	if (min1>j) min2=min1 , min1=j;else if (min2>j&&j>min1) min2=j;
	if (min1>c) min2=min1 , min1=c;else if (min2>c&&c>min1) min2=c;
	}
    
	cout << " lotfan tebghe rahnamaye zir gozine morede nazar ra entekhab konid " << endl << " baraye namayeshe Bishine adade 1 , Bishine dovom adade 2 , Kamine adade 3 , Kamine dovom adade 4 va dar gheyre in surat baraye khuruj adade 0 ra vared konid "<<endl ; // az karbar mikhahim ba tavajoh be niaze khod adadi ra vared konad ta matlube khod ra az barname daryaft konad
	while (1) // in shart hamvare bargharar ast va ta vaghti ke karbar 0 ra vared nakonad mitavanad ba entekhabe adade digari matlube khod ra moshahede konad
	{int n=5;
	cin >> n ;
	if (n==1) cout << " Bishine barabar ast ba : " << max1  << endl;
	else if (n==2) cout << " dovomin Bishine barabar ast ba : " << max2 << endl;
	else if (n==3) cout << " Kamine barabar ast ba : " << min1 << endl ;
	else if (n==4) cout << " dovomin Kamine barabar ast ba : " << min2 << endl;
	else if (n==0) break; // dar surate vared kardane adade 0 kare barname be etmam miresad
	}
return 0;
}
