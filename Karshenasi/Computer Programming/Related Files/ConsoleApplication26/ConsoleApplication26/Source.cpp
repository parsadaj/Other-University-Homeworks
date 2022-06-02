#include <iostream>
using namespace std;

int main()
{
  const int p = 10^5;
  int javab=0,a=0,t=0,shomarandea=0,shomarandeb=0,javaba=0,javabb=0;
  char ch;
  char s[p];
  int flag[p];
  for(int y =0 ; y<p ;y++)
    flag[y] =0;
  for (int h =0;h<p;h++)
  {
    cin.get(ch);
    if (ch == '\n')  break;
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
          else if ( p==0 )
          {
            shomarandea++;
          }

  }
  for (int k = 0;k<p;k++){
    if ( flag[k] == 1 ){
      shomarandeb++;
      }
      }
      if(shomarandea%2==0){
        javaba=shomarandea/2;
      }
      else{
          shomarandea--;
          javaba=(shomarandea/2)+1;
      }
      if(shomarandeb%2==0){
        javabb=shomarandeb/2;
      }
	  else{
          shomarandeb--;
          javabb=(shomarandeb/2)+1;
      }
      javab=javaba+javabb;
    cout << javabb ;
    return 0;
}