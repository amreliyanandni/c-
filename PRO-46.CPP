#include<iostream.h>
#include<conio.h>
class demoA
{
 public:
 int a;
 void inputdata()
 {
  cout<<"\n parent class..";
  cout<<"enter value of a:";
  cin>>a;
 }
 void display()
 {
  cout<<"value of A is:"<<a;
 }
};
class demoB:public demoA
{
 public:
 int a,b;
 void inputdata()
 {
  demoA::inputdata();
  cout<<"\n child class...";
  cout<<"\n enter value of A:";
  cin>>a;
  cout<<"\n enter value of B:";
  cin>>b;
 }
 void display()
 {
  demoA::display();
  cout<<"sum of A and B:"<<(a+b);
 }
};
void main()
{
 clrscr();
 demoB db;
 db.inputdata();
 db.display();
 getch();
}
