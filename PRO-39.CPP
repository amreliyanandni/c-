#include<iostream.h>
#include<conio.h>
class inventory1
{
 int ino,qty;
 float rate;
 public:
 inventory1(int n,int q,float r)
 {
  ino=n;qty=q;rate=r;
 }
  inventory1()
  {
   cout<<"\n inventory1's object created";
  }
  int getino()
  {
   return(ino);
  }
  float getamt()
  {
   return(qty*rate);
  }
  void display()
  {
   cout<<endl<<"ino="<<ino<<"qty="<<qty<<"rate="<<rate;
  }
 };
 class inventory2
 {
  int ino;
  float amount;
  public:
  void operator=(inventory1 I)
  {
   ino=I.getino();
   amount=I.getamt();
  }
  void display()
  {
   cout<<endl<<"ino="<<ino<<"amount="<<amount;
  }
 };
 void main()
 {
  clrscr();
  inventory1 I1(10001,30,75);
  inventory2 I2;
  I2=I1;
  I1.display();
  I1.display();
  getch();
 }
