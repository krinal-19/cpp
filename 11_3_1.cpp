#include<iostream>

using namespace std;
int main()
{
int num,num2,a;
num=10;
cin>>num2;
//a=num/num2;
try
{
if(num2==0)
throw num2;
else
{
a=num/num2;

cout<<"result\n"<<a;
}}

catch(int x)
{
cout<<"\n can't divide\n"<<x;
}
cout<<"\nnamdnsn";
return 0;
}

