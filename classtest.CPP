#include<iostream.h>
#include<conio.h>
class test
{
 int A;
 void readdata();
 public:
 void inputdata(int a);
};
void main()
{
 clrscr();
 int val;
 cout<<"enter value:";
 cin>>val;
 test t1,t2,t3;
 t1.inputdata(val);
 cout<<"enter value:";
 cin>>val;
 t3.inputdata(val);
 getch();
}
 void test::readdata()
 {
  cout<<"\n value is:"<<A;
 }
  void test::inputdata(int a)
  {
   A=a;
   readdata();
  }