#include<iostream>
using namespace std;
int sum(int i)
{return i;
}

int sum(int i,int j)
{
return (i+j);
}

int sum(int i,int j,int k)
{
return (i+j+k);
}

int main()
{

cout<<"sum is:"<<sum(1)<<endl;
cout<<"sum is:"<<sum(1,1)<<endl;
cout<<"sum is:"<<sum(1,1,1)<<endl;
return 0;
}

