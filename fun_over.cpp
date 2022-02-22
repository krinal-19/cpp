#include<iostream>
using namespace std;

int sum(int i,int j)
{
return (i+j);
}
float sum(float i,float j)
{
return (i+j);
}

int main()
{

cout<<"sum is:"<<sum(1,2)<<endl;
cout<<"sum is:"<<sum(1.3f,3.4f)<<endl;

return 0;
}
