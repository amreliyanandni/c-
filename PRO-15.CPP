#include<iostream.h>
#include<conio.h>
class demoA
{
 public:
 char*user;
 void welcomeuser(char*c);
 void displayuser();
};
void main()
{
 clrscr();
 char*ch;
 cout<<"enter user name:";
 cin>>ch;
 demoA dA;
 dA.welcomeuser(ch);
 dA.displayuser();
 getch;
}
void demoA:: welcomeuser(char*c)
{
 user=c;
}
void demoA:: displayuser()
{
 cout<<"welcome"<<user<<"into c++ oo programing...";
}