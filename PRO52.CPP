#include<iostream.h>
#include<conio.h>
class base
{
 public:
 virtual void display(int x=10)
 {
  cout<<"\n hellow good bye..";
  cout<<"\n base value of x is:"<<x;
 }
};
class derives:public base
{
 public:
 virtual void display(int x=100)
 {
  cout<<"\n hellow thank you for calling mee ";
  cout<<"\n derive value of x is:"<<x;
 }
};
void main()
{
 base*b=new derives();
 b->display();
 b->display(1000);
 getch();
}