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
 int mainvalue1,mainvalue2;
 clrscr();
 cout<<"enter first value:";cin>>mainvalue1;
 cout<<"enter second value:";cin>>mainvalue2;
 swapping(&mainvalue1,&mainvalue2);
 cout<<"after swapping first value is"<<mainvalue1<<"and second value is:"<<mainvalue2;
 getch();
}