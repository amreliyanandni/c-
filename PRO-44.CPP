#include<iostream.h>
#include<conio.h>
class methodover
{
 public:
 int grno;
 methodover()
 {
  cout<<"\n hi i am default method";
 }
 methodover(int grno)
 {
  methodover::grno=grno;
  cout<<"\n method one parameter"<<grno;
 }
 methodover(int grno,char*nm)
 {
  methodover::grno=grno;
  cout<<"\n method two parameter";
  cout<<"\n grno is:"<<grno<<"and student name is:"<<nm;
 }
};
void main()
{
 methodover m1;
 methodover m2(234);
 methodover m3(2234,"nandni");
 getch();
}