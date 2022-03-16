//pure virtual function

#include<iostream>
using namespace std;

class shape
{
protected:
float x;
public:
void getdata()
{
cin>>x;
}
virtual float calculatearea()=0;
};

class square:public shape
{
public:
float calculatearea()
{
return x*x;
}
};

class circle: public shape
{
public:

float calculatearea()
{
return 3.14*x*x;
}
};

int main()
{
square s;
circle c;
cout<<"enter length to cal aqrea of asquare:\n";
s.getdata();
cout<<"\narea of squre is:"<<s.calculatearea();

cout<<"enter length to cal aqrea of acircle:\n";
c.getdata();
cout<<"area of circle is:"<<c.calculatearea();
}


