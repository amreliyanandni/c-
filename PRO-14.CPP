#include<iostream.h>
#include<conio.h>
class arithoper
{
 int first value,second value;
 public:
  void inputdata(int first,int second)
  {
   first value=first;
   second value=second;
  }
   void addition()
   {
    cout<<"addition is:"<<(first value + second value);
   }
    void substraction()
    {
     cout<<"substration is"<<(first valuie - second valu);
    }
    void multiplication()
    {
     cout<<"multiplication is"<<(first value * second value);
    }
     void division()
     {
      cout<<"division is"<<(first value / second value);
     }
      void modulas()
      {
       cout<<"modulas is"<<(first value % second value);
      }
};
void main()
{
 arithoper ao;
 int x,y;
 clrscr;
 cout<<"enter first value";cin>>x;
 cout<<"enter second value";cin>>y;
 ao.inputdata(x,y);
 ao.addition();
 ao.substraction();
 ao.multiplication();
 ao.division();
 getch();
}
