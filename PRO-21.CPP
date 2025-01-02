#include<iostream.h>
#include<conio.h>
class mycal
{
 int val;
 public:
 void inputdata(int v)
 {
  val=v;
 }
  void sum(mycal m1,mycal m2)
  {
   cout<<"sum of two class object value is:"<<(m1.val+m2.val);
  }
};
void main()
{
 int value;
 clrscr();
 mycal c1,c2,c3;
 cout<<"enter value:";
 cin>>value;
 c1.inputdata(value);
 cout<<"enter value:";
 cin>>value;
 c2.inputdata(value);
 c3.sum(c1,c2);
 getch();
}