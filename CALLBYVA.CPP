#include<iostream+.h>
#include<conio.h>
void swapping
(int first,int second)
{
 first=first+second;
 second=first-second;
 first=first-second;
 cout<<"after swapping first value is:"
 <<first<<"and second value is:"
 <<second;
}
 void main()
 {
  int minvalue1,minvalue2;
  clrscr();
  cout<<"enter first value:";
  cin>>minvalue1;
  cout<<"ennter second value:";
  cin>>minvalue2;
  swapping(minvalue1,minvalue2);
  getch();
 }