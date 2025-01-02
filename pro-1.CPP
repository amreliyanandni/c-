#include<iostream.h>
#include<conio.h>
void main()
{
 float si,p,r,n;
 clrscr();
 cout<<"principal amount is:";
 cin>>p;
 cout<<"rate of interest is:";
 cin>>r;
 cout<<"number of year is:";
 cin>>n;
 si= p*r*n/100;
 cout<<"simple interest is:"<<si;
 getch();
}