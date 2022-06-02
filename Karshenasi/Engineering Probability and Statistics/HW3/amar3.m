clear
clc
format long;
v = input('baraye namayeshe tabe e morede nazare khod yeki az adade zir ra vared konid:\n1-yeknavakht peyvaste\n2-normal\n3-nemaii\n4-gamma\n5-khido\n6-beta\n7-t student\n8-fisher\n');
if v==1
    a= input('a ra vared konid:\n');
    b= input('b ra vared konid:\n');
    x = [a b];
    y= 1/(b-a)*ones(2,1)';
elseif v==2
    zig2 = input('zigma2 ra vared konid:\n');
    zig= zig2 ^ (1/2);
    miu = input('miu ra vared konid:\n');
    x= miu-3*zig:0.0001:miu+3*zig;;
    siz = size(x);
    for i=1:siz(2)
    y(i)= (1/(zig*((2*pi)^1/2)))*exp(((x(i)-miu)^(2))/((-2)*(zig2)));
    end
elseif v==3
    teta = input('theta ra vared konid:\n');
    x= 0:0.0001:5/teta;
    siz=size(x);
    for i=1:siz(2)
    y(i)= teta*exp(teta*(-1)*x(i));
    end
elseif v==4
    alpha = input('alpha ra vared konid:\n');
    beta = input('beta ra vared konid:\n');
    x = 0:0.0001:5*alpha/beta;
    siz=size(x);
    for i=1:siz(2)
    y(i)= (beta^alpha)*(x(i)^(alpha-1))*exp((-1)*beta*x(i))/ga;
    end
elseif v==5
    r = input('r ra vared konid:\n');
    x = 0:0.0001:5*(r^2)/4;
    siz=size(x);
    for i=1:siz(2)
    y(i) =((x(i)^(r/2 -1))*exp((-1)*x(i)/2))/((2^(r/2))*gamma(r/2));
    end
elseif v==6
    alpha = input('alpha ra vared konid:\n');
    beta = input('beta ra vared konid:\n');
    x=0:0.0001:1  ;  
    siz=size(x);
    for i=1:siz(2)
    y(i) = gamma(alpha)*gamma(beta)*(x(i)^(alpha-1))*((1-x(i))^(beta-1))/gamma(alpha+beta);
    end
elseif v==7
    r = input('r ra vared konid\n');
    x=(-10):0.0001:10 ;  
    siz=size(x);
    for i=1:siz(2)
    y(i) = ( (gamma((r+1)/2)/gamma(r/2))*(1/((r*pi)^(1/2)))*(1/((1+((x(i)^2)/r))^((r+1)/2))));
    end
elseif v==8
    r1 = input('r1 ra vared konid\n');
    r2 = input('r2 ra vared konid\n');   
    x=0.0001:0.00000001:0.002 ;  
    siz=size(x);
    for i=1:siz(2)
    y(i) = ((gamma((r1+r2)/2) * ((r1/r2)^(r1/2)))/(gamma(r1/2)*gamma(r2/2)))* (    ((r1/(x(i)^2))-1)/((1+(r1*x(i)/r2))^((r1+r2)/2))) ;
    end
end
p=plot(x,y,'-');
    