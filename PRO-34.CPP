   #include<iostream.h>
   #include<conio.h>
   class demo
   {
    public:
    int x;
    demo (int a)
    {
     x=a;
    }
    void operator*(){x=x*x;}
    void operator-(){x=-x;}
    void operator+(){x=x+x;}
    //void operator/(){x=x/100}
    void display()
    {
     cout<<"\n value of x is :"<<x;
    }
  };
  void main()
  {
   clrscr();
   int data;
   cout<<"enter value:";
   cin>>data;
   demo d(data);
   *d;d.display();
   +d;d.display();
   -d;d.display();
   //ld;d.display();
   getch();
  }