#include<iostream.h>
#include<conio.h>
class demoA
{
 public:
 demoA()
 {
  cout<<"\n from demoA constructore...";
 }
 void message()
 {
  cout<<"\n good morning..";
 }
};
class demoB
{
 public:
 demoB(demoA d)
 {
  d.message();
 }
};
void main()
{
 demoA DA;
 demoB DB(DA);
 getch();
}