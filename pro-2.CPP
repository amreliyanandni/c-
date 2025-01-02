#include<iostream.h>
#include<conio.h>
void main()
{
 int tmp,val,sum=0;
 clrscr();
 cout<<"enter value of 5 digit only:";
 cin>>val;
 while(val!=0)
 {
  tmp=val%10;
  sum=sum+tmp;
  val=val/10;
 }
 cout<<"sum of five digit:"<<sum;
 getch();
}