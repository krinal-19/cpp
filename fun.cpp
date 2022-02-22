#include<iostream>

using namespace std;

int sum(int l,int w,int b)
{
return (l+w+b);
}

int main()
{
	cout<<"sum is[5]:"<<sum(5)<<endl<<endl;
	cout<<"sum is [5,5]:"<<sum(5, 5)<<endl<<endl;
	cout<<"sum is [5,5,5]:"<<sum(5, 5, 5)<<endl<<endl;
return 0;
}

