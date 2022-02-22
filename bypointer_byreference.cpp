#include<iostream>

using namespace std;

	void swap(int *a,int *b)

	{
		int temp;
		temp=*a;
		*a=*b;
		*b=temp;
	}

	void swap1(int &a,int &b)
	{
		int temp1;
		temp1=a;
		a=b;
		b=temp1;
	}

int main()
{

int a,b;
cout << "Enter two numbers: \n";
 cin >> a >> b;

swap(&a, &b);

 cout << "After swapping first and second number is "<<a <<" "<<b<<"\n";
swap1(a,b);
 cout << "After swapping first and second number is "<<a <<" "<<b;
 return 0;
}
