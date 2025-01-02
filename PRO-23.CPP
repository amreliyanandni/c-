#include<iostream.h>
#include<conio.h>
class mycale
{
 int val;
 public:
 void inputdata(int v)
  {
   val=v;
  }
  friend void sum(mycale m1,mycale m2);
 };
void main()
{
 int value;
 clrscr();
 mycale c1,c2;
 cout<<"enter value:";cin>>value;
 c1.inputdata(value);
 cout<<"enter value:";cin>>value;
 c2.inputdata(value);
 sum(c1,c2);
 getch();
}
































