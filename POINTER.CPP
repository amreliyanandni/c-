#include<iostream.h>
#include<conio.h>
void main()
{
 int x;
 int*y;
 clrscr();
 cout<<"enter values of x:";
 cin>>x;
 cout<<"\n address of 2 is:"<<&x;
 y=&x;
 cout<<"\n address of y is:"<<y;
 cout<<"\n address values is:"<<*y;
 getch();
}