clear all
clc
format long
x= 0:pi/12:8*pi+pi/4;
X=[x ;ones(1,100)];
y=sin(x);
matriszarayeb1 = ((X*X')^(-1))*X * y';
ChandjomleyiDaraje1BarazeshShode = ['y = ',num2str(matriszarayeb1(1)),'x + ',num2str(matriszarayeb1(2))]
y1= matriszarayeb1(2) + x*matriszarayeb1(1);
X2=[x.^2;x ;ones(1,100)];
matriszarayeb2 = ((X2*X2')^(-1))*X2 * y';
ChandjomleyiDaraje2BarazeshShode = ['y = ',num2str(matriszarayeb2(1)),'x^2 + ',num2str(matriszarayeb2(2)),'x + ',num2str(matriszarayeb2(1))]
y2= matriszarayeb2(3) + x*matriszarayeb2(2)+x.*x*matriszarayeb2(1);
p=plot (x,y,'.',x,y1,x,y2);
p(1).Color='k';
p(2).Color=[0.3 0.8 0.5];
p(3).Color=[0.9 0 0.9];
xy = x.*y;
yek = ones(100,1);
jxy = xy*yek;
jx = x*yek;
jy = y*yek;
x2 = x.*x;
y2= y.*y;
jx2 = x2*yek;
jy2 = y2*yek;
zaribhambastegi = (100*jxy - jx*jy)/( (100*jx2 - (jx)^2)* (100*jy2 - (jy)^2) )
r = zaribhambastegi;
mianginy = jy/100;
zigmay = ( ( (y - mianginy).^2)*yek )/ 100;
khatayestandardebaravard = zigmay*( (1- r^2)^(1/2) ) 
