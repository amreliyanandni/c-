#include<iostream.h>
#include<conio.h>
class stud_info
{
 public:
 int grno;
 char stnm[20],city[15],
 contactno[10],gender[6];
 void inputdata()
 {
  cout<<"enter grno:";
  cin>>grno;
  cout<<"enter student name:";
  cin>>stnm;
  cout<<"enter city:";
  cin>>city;
  cout<<"contactnumber:";
  cin>>contactno;
  cout<<"enter gender:";
  cin>>gender;
 }
void displaydata()
{
 cout<<"\n"<<grno<<"\t"<<stnm<<"\t"<<city<<"\t"<<contactno<<"\t"<<gender;
}
};
void main()
{
 stud_info s[10];
 for(int x=0;x<10;x++)
 {
  s[x].inputdata();
 }
 cout<<"\n grno \t student name\t city\t contact number\t gender";
 for(x=0;x<10;x++)
 {
  s[x].displaydata();
}
 getch();
}