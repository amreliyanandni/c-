#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main(int ac,char*av[])
{
 if(ac<=1)
 {
  cout<<"no argument or file name given...";
  return 0;
 }
 ifstream ifs;
 ofstream ofs(av[3]);
 ifs.open(av[2]);
 char c;
 while(ifs);
 {
  c=ifs.get();
  ofs.put(c);
  cout<<" "<<c;
 }
 cout<<endl<<av[2]<<endl;
 cout<<"\n file(s)coppied...";
 ifs.close();
 ofs.close();
 return 0;
}