#include<iostream.h>
#include<fstream.h>
void main()
{
 ofstream ofs("new file.txt");
 ifstream ifs;
 ifs.open("BCAFILEcopy.cpp");
 char c;
 while(ifs)
 {
  c=ifs.get();
  ofs.put(c);
 }
 cout<<"file copied!!!!";
 ifs.close();
 ofs.close();
}