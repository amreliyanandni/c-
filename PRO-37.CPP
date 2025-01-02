#include<iostream.h>
#include<conio.h>
class time
{
 int hrs,min;
 public:
 time(int a,int b)
 {
  cout<<"constructor called with two parameters..."<<endl;
  hrs=a;
  min=b;
 }
 operator int();
 ~time()
 {
  cout<<"destructor called...."<<endl;
 }
};
time::operator int()
{
 cout<<"class type to basic type conversion.."<<endl;
 return (hrs*60+min);
}
void main()
{
 clrscr();
 int h,m,duration;
 cout<<"enter hours";cin>>h;
 cout<<"enter minutes";cin>>m;
 time t(h,m);//construct object
 duration=t;//casting canversion or daration=(int)t
 cout<<"total minutes are"<<duration;
 cout<<"\n 2nd method operator overloading"<<endl;
 duration=t.operator int();
 cout<<"total minutes are"<<duration;
 getch();
}
