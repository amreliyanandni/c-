#include<iostream.h>
#include<conio.h>
void main()
{
 int num,rev;
 cout<<"\n enter number:";cin>>num;
 for(;num>0;num<=10)
 {
  rev=rev*10+num%10;
 }
 cout<<(num==rev)"palindeome":<<"Not palindrome"<<endl;
 getch();
}