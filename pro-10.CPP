#include<iostream.h>
#include<conio.h>
void swapping (int*first,int*second)
{
 *first=*first+*second;
 *second=*first-*second;
 *first=*first-*second;
}
 void main()
 {
  int minvalue1,minvalue2;
  clrscr();
  cout<<"enter first value:";
  cin>>minvalue1;
  cout<<"enter second value:";
  cin>>minvalue2;
  swapping(&minvalue1,&minvalue2);
  cout<<"after swapping first value is:"<<minvalue1<<"and second value is:"<<minvalue2;
  getch ();
 }