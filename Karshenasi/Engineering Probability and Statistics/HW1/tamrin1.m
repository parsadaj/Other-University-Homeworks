clear all
clc
format long
zarb =1;
N=1000;
X = sort(round(100*rand(N,1)));
jam = ones(1,N)*X;

MianginHesabi= jam/N
n = N;

    for j=1:N
        if X(j)==0
            n = n-1;
        else
           zarb = zarb* X(j)^(1/10) ; 
        end
    end
MianginHendesi=zarb^(10/n)

Y= (ones(N,1) ./ X);
sum=0;
for j=1:N
        if Y(j)==inf
            n = n-1;
        else
           sum = sum + Y(j);
        end
end
    
MianginHarmunik = n / sum

varians = ones(1,N)*( ((X-MianginHesabi*ones(N,1)).^2))/N

EnherafMeyar = varians^(1/2)
count = 0;
for i=1:N
    for k=1:N
        if X(k)==X(i)
            count = count+1;
        end
    end
    f(i)=count;
    count = 0;
end

qq = max(f);
shomar = 0;
for i=1:N
    if f(i)== qq
        shomar = shomar+1;
        q(shomar)=X(i);
    end
end

tedadmod = shomar / qq;
mod(1)=q(1);
mod(tedadmod)=q(shomar)
if tedadmod > 1
    for i=2:(tedadmod-1)
        mod(i)=q(i-1+qq);
    end
end

mod
Q1=(X(250)+X(251))/2
Q2=(X(500)+X(501))/2
Q3=(X(750)+X(751))/2
SIQR=(Q3-Q1)/2
IQR = Q3-Q1
P10=(X(100)+X(101))/2;
P90=(X(900)+X(901))/2;
P50=(X(500)+X(501))/2;
SKp=( P10 + P90 - 2*P50 )/(P90-P10)
     