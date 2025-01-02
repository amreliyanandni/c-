#include<iostream.h>
#include<conio.h>
class arithconst
{
 public:
 float x,y;
 arithconst()
 {
  x=50.5;
  y=30.5;
 }
 arithconst(float a)
 {
  x=a;
  y=20.5;
 }
 arithconst (float a, float b)
 {
  x=a;
  y=b;
 }
 void addition()
 {
  cout<<"\n addition is:"<<(x+y);
 }
 void substraction()
 {
  cout<<"\n substraction is:"<<(x-y);
 }
 void multiplication()
 {
  cout<<"\n multiplication is:"<<(x*y);
 }
 void division()
 {
  cout<<"\n division is:"<<(x/y);
 }
};
void main()
{
 arithconst ac1;
 arithconst ac2(10.5);
 arithconst ac3(5.5,5.5);
 cout<<"\n default constructore data:";
 ac1.addition();
 ac1.substraction();
 ac1.multiplication();
 ac1.division();
 //ac2.modulas;
 cout<<"\n two parameter constructar data:";
 ac3.addition();
 ac3.substraction();
 ac3.division();
 //ac3.modulaa();
 getch();
}

