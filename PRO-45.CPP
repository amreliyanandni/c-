#include<iostream.h>
#include<conio.h>
class as
{
 private:
 int a;
 protected:
 int b;
 public:
 int c;
 as()
 {
  a=1;
  b=2;
  c=3;
 }
 void display()
 {
  cout<<"\n value of A is:"<<a;
  cout<<"\n value of B is:"<<b;
  cout<<"\n value of C is:"<<c;
 }
};
class sub_class:public as
{
 public:
 sub_class()
 {
  b=1000;
 }
 void displaysub()
 {
 //cout<<"\n sub class value of A is:"<<a;
  cout<<"\n sub class value of B is:"<<b;
  cout<<"\n sub class value of C is:"<<c;
 }
};
void main()
{
 clrscr();
 as as;
 //as.a=10;
 //as.c=20;
 as.c=30;
 as.display();
 sub_class sc;
 //sc.A=100;
 //sc.B=200;
 sc.c=300;
 sc.displaysub();
 sc.display();
 getch();
}