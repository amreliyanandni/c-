#include<iostream.h>
#include<conio.h>
class A
{
 public:
 A()
 {
   cout<<"\n good morning from default constructar";
 }
  A(char*a)
  {
   cout<<"\n from parameterized constructor good bye..."<<a;
  }
};
void main()
{
 clrscr();
 A a1;
 A az("XYZ");
 getch();
}