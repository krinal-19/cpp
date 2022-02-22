#include<iostream>

using namespace std;

inline int cube(int x)
{
int y;
y=x*x*x;
return y;
}
int main()
{


cout<< "cube of value 5 is:"<<cube(5)<<endl;
return 0;
}
