#include<iostream>

using namespace std;

void demo()
throw(int,double)
{
int a=2;
if(a==1)
throw a;
else if(a==2)
throw 'A';
else if(a==3)
throw 4.5;
}

int main()
{
try
{
demo();
}
catch(int n)
{
cout<<"\n eception caught.";
}
cout<<"\nend of program.";
}

