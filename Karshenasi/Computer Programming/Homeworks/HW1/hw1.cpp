#include <iostream>

using namespace std;

int main()

{ int a , b , c , d , e , f , g , h , i , j , min , max;

cout << “dah adad e sahih vared konid”;

cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;

{ if (a>b) min=b; else min=a; // yeki yeki moghayese mikonad ta be kuchektarin beresad

if (min>c) min=c;

if (min>d) min=d;

if (min>e) min=e;

if (min>f) min=f;

if (min>g) min=g;

if (min>h) min=h;

if (min>i) min=i;

if (min>j) min=j;

}

{ if (a<b) max=b; else max=a; // yeki yeki moghayese mikonad ta be bozorgtarin beresad

if (max<c) max=c;

if (max<d) max=d;

if (max<e) max=e;

if (max<f) max=f;

if (max<g) max=g;

if (max<h) max=h;

if (max<i) max=i;

if (max<j) max=j;

}

cout << "max = " << max << " , " << "min = " << min; // bozorgtarin o kuchektarin ra chap mikonad

return 0;

}