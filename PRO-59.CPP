#include<iostream.h>
#include<fstream.h>
void main()
{
 char*data;
 ifstream ifs;
 ifs.open("demo.txt");
 cout<<"\n your file pointer positionis:"<<ifs.tellg()<<endl;
 ifs>>data;
 cout<<data;
 cout<<"\n your file pointer positionis:"<<ifs.tellg()<<endl;
 ifs.seekg(10);
 cout<<"\n your file pointer positionis:"<<ifs.tellg()<<endl;
 cout<<"\n single data reading\n";
 char c;
 while(ifs)
 {
 c=ifs.get();
 //cout<<"\n file data is:"<<endl;
 cout<<c;
 }
 cout<<"\n your file pointer positions:"
 <<ifs.tellg();
 ifs.close();
}