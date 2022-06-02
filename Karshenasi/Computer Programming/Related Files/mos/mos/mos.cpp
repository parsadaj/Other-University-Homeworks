#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <string.h>
#include "stdafx.h"
//-----------------------------------------------------------------
//compare two string and return +1 if x>y return -1 if x<y and return 0 if x=y
int compare(char x[1001],char y[1001])
{
 int i;
 for(i=0;i<1001;i++)
 {
  if(x[i]>y[i]) return 1;
  if(x[i]<y[i]) return -1;
 }
return 0;
}
//----------------------------------------------------
//make randomize number
void getRandomNumber(char a[1002])
{
    a[1001]='\0';
    int length,i;
    length=(rand()%900)+100;
    for(i=0;i<=1000;i++)
    {
        a[i]='0';
    }
    for(i=0;i<length;i++)
    {
        a[1000-i]=(rand()%10)+48;
    }
    i--;
    if(a[1000-i]=='0')
    {
        while(a[1000-i]=='0')
        {
            a[1000-i]=(rand()%10)+48;
        }
    }
}
//----------------------------------------------------------------------------------------------------
//sub is  function that subtract two char array.
void Sub(char x[1002],char y[1002],char cal_name)
{
    FILE *fp;
    switch(cal_name)
    {
        case 'A':fp=fopen("A.txt","a+");break;
        case 'B':fp=fopen("B.txt","a+");break;
        case 'C':fp=fopen("C.txt","a+");break;
        case 'D':fp=fopen("D.txt","a+");break;
        case 'F':fp=fopen("F.txt","a+");break;
    }
    int i,j,temp=0;
    char z[1002];
    z[1001]='\0';
    for(i=0;i<=1000;i++)
    {
        z[i]='0';
    }
    if(compare(x,y)==-1)
    {
        char temp;
        for(i=0;i<=1001;i++)
        {
            temp=y[i];
            y[i]=x[i];
            x[i]=temp;
        }
    }
    for(i=1000;i>=0;i--)
    {
        temp=x[i]-y[i];
        if(temp>=0)
        {
            z[i]=temp+48;
        }
        else
        {
            j=i-1;
            while(x[j]=='0')
            {
                x[j]='9';
                j--;
            }
            x[j]=x[j]-1;
            z[i]=((x[i]-48)-(y[i]-48)+10)+48;
        }
    }
    fprintf(fp,"%s\n-\n%s\n=\n%s\n\n\n\n",x,y,z);
    fclose(fp);
}
//Add two-digit numbers to at least 1000 does
void add(char a[1002],char b[1002],char cal_name)
{
    FILE *fp;
    switch(cal_name)
    {
        case 'A':fp=fopen("A.txt","a+");break;
        case 'B':fp=fopen("B.txt","a+");break;
        case 'C':fp=fopen("C.txt","a+");break;
        case 'D':fp=fopen("D.txt","a+");break;
        case 'F':fp=fopen("F.txt","a+");break;
    }
    int i,j=1001,l=0,p;
    char c[1003];
    c[1002]='\0';
    for(i=0;i<=1000;i++)
    {
        c[i]='0';
    }
    for(i=1000;i>=0;i--)
    {
        p=((a[i]-48)+(b[i]-48)+l);
        c[j]=(p%10)+48;
        if((p<=9))
        {
            l=0;
        }
        else
        {
            l=1;
        }
      j--;
    }
    c[0]=48+l;
    fprintf(fp,"%s\n+\n%s\n=\n%s\n\n\n\n",a,b,c);
    fclose(fp);
}
//------------------------------------
//Add two-digit numbers to at least 2000 does.it is for Multiply function.
void big_sum(char a[2002],char b[2002],char c[2002])
{
    int i,l=0,p;
    for(i=2000;i>=0;i--)
    {
        p=((a[i]-48)+(b[i]-48)+l);
        c[i]=(p%10)+48;
        if((p<=9))
        {
            l=0;
        }
        else
        {
            l=1;
        }
    }
}
//----------------------------------------------------------------------------------------------------
//Multiply two-digit number, 1000
void mul(char a[1002],char b[1002],char cal_name)
{
    FILE *fp;
    switch(cal_name)
    {
        case 'A':fp=fopen("A.txt","a+");break;
        case 'B':fp=fopen("B.txt","a+");break;
        case 'C':fp=fopen("C.txt","a+");break;
        case 'D':fp=fopen("D.txt","a+");break;
        case 'F':fp=fopen("F.txt","a+");break;
    }
    int i,j,q,l=0;
    char c[2002];
    char z[2002];
    z[2001]='\0';
    c[2001]='\0';
    for(i=0;i<=2000;i++)
    {
        c[i]='0';
    }
    for(i=1000;i>=0;i--)
    {
        //reset z array and l
        l=0;
        for(j=0;j<=2000;j++)
        {
            z[j]='0';
        }
        for(j=1000;j>=0;j--)
        {
            q=(((b[i]-48)*(a[j]-48))+l);
            z[j-(1000-i)+1000]=(q%10)+48;
            if(q>9)
            {
                l=(q-(q%10))/10;
            }
            else
            {
                l=0;
            }
            if(j==0 && l!=0)
            {
                z[999-(1000-i)]=l+48;
            }
        }
        big_sum(c,z,c);
    }
    fprintf(fp,"%s\n*\n%s\n=\n%s\n\n\n\n",a,b,c);
    fclose(fp);
}
//-----------------------------------------------------------------------
void getquestion(char a[1002],char b[1002],int *x)
{
    *x=(rand()%3);
    getRandomNumber(a);
    getRandomNumber(b);
}
//----------------------------------------------------------------
//make 8 questions and do sub,mul and add action and save them in file
void Calculate(char cal_name)
{
    //use time_t type and clock() functoin to calculate time
    FILE *fp;
    switch(cal_name)
    {
        case 'A':fp=fopen("A-time.txt","w+");break;
        case 'B':fp=fopen("B-time.txt","w+");break;
        case 'C':fp=fopen("C-time.txt","w+");break;
        case 'D':fp=fopen("D-time.txt","w+");break;
        case 'F':fp=fopen("F-time.txt","w+");break;
    }
    int i;
    char s1[1002];
    char s2[1002];
    time_t start,End,def;
    int *x;
    x=(int *)malloc(sizeof(int));
    start=clock();
    for(i=0;i<8;i++)
    {
        getquestion(s1,s2,x);
        switch(*x)
        {
            case 0:add(s1,s2,cal_name);break;
            case 1:Sub(s1,s2,cal_name);break;
            case 2:mul(s1,s2,cal_name);break;
        }
    }
    End=clock();
    def=End-start;
    fprintf(fp,"%d mS\n",def);
    fclose(fp);
    free(x);
}
//--------------------------------------------------------
//Empty file from Data may be in file
void reset_file(void)
{
    FILE *fp[5];
    int i;
    fp[0]=fopen("A.txt","w");
    fp[1]=fopen("B.txt","w");
    fp[2]=fopen("C.txt","w");
    fp[3]=fopen("D.txt","w");
    fp[4]=fopen("F.txt","w");
    for(i=0;i<5;i++)
    {
        fclose(fp[i]);
    }
}
//-----------------------------------------
//save calculator time in Arranged form in File and show it in standard output
void save_report(void)
{
    FILE *fp[6];
    int time[5];
    char cal_name[5]={'A','B','C','D','F'};
    char Temp;
    int i,j,temp;
    fp[0]=fopen("A-time.txt","r");
    fp[1]=fopen("B-time.txt","r");
    fp[2]=fopen("C-time.txt","r");
    fp[3]=fopen("D-time.txt","r");
    fp[4]=fopen("F-time.txt","r");
    fp[5]=fopen("sort calculator.txt","w");
    for(i=0;i<5;i++)
    {
        fscanf(fp[i],"%d",&time[i]);
        fclose(fp[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(time[i]>time[j])
            {
                temp=time[j];
                time[j]=time[i];
                time[i]=temp;
                Temp=cal_name[j];
                cal_name[j]=cal_name[i];
                cal_name[i]=Temp;
            }
        }
    }
    for(i=4;i>=0;i--)
    {
        fprintf(fp[5],"%d. %c %d mS\n",5-i,cal_name[i],time[i]);
        printf("%d. %c %d mS\n",5-i,cal_name[i],time[i]);
    }
    fclose(fp[5]);
}
//----------------------------------------------------
int main()
{
    srand(time(NULL));
    reset_file();
    Calculate('A');
    Calculate('B');
    Calculate('C');
    Calculate('D');
    Calculate('F');
    save_report();
    return 0;
}
