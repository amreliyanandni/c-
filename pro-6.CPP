#include<iostream.h>
#include<conio.h>
void main()
{
 int no,x,n;
 clrscr();
 cout<<"enter n no of value:";
 cin>>no;
 int a=0,b=1,c=0;
 cout<<(a+1)<<(b+2);
 for(x=3; x<=n; x++)
 {
  c=a+b;
  cout<<(c+x);
  a=b;
  b=c;
 }
}