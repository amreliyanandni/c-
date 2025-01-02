#include<iostream.h>
#include<conio.h>
//without argument without return
void rectangle();
void triangle();
void circle();
float hight,length,radius;
void main()
{
 clrscr();
 cout<<"enter length:";cin>>length;
 cout<<"enter hight:";cin>>hight;
 cout<<"enter radius:";cin>>radius;
 rectangle();
 circle();
 getch();
}
void rectangle()
{
 cout<<"length of rectangle is::"<<length<<endl;
 cout<<"hight of rectangle is::"<<hight<<endl;
}
void triangle()
{
 cout<<"length of triangle is::"<<length<<endl;
 cout<<"hight of triangle is::"<<hight<<endl;
 cout<<"area of triangle is::"<<(1.0/2.0)*length *hight<<endl;
}
void circle()
{
 cout<<"length of circle is::"<<radius<<endl;
 cout<<"area of circle is::"<<(3.14*radius*radius);
}
