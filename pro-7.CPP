#include<iostream.h>
void main()
{
 int month;
 cout<<"enter the month number:";
 cin>>month;
 switch(month)
 {
  case 1:
  cout<<"january has cold weather";
  break;
  case 2:
  cout<<"february has cold weather";
  break;
  case 3:
  cout<<"march has mild weather";
  break;
  case 4:
  cout<<"april has mild weather";
  break;
  case 5:
  cout<<"may has warm weather";
  break;
  case 6:
  cout<<"june has warm weather";
  break;
  case 7:
  cout<<"july has not weather";
  break;
  case 8:
  cout<<"august has mild weather";
  break;
  case 9:
  cout<<"september has mild weather";
  break;
  case 10:
  cout<<"october has mild weather";
  break;
  case 11:
  cout<<"november has cold weather";
  break;
  case 12:
  cout<<"december has cold weather";
  break;
  default:
  cout<<"invalid month number";
  break;
 }
}
