#include<iostream>

using namespace std;

class space
{
	int x,y,z;
	public:
	space()
	{
	x=y=z=0;
	}
	space(int a,int b,int c)
	{
	x=a;
	y=b;
	z=c;
	}
	void display()
	{
	cout<<"\nx="<<x<<",y="<<y<<",z="<<z<<"\n";
	}
	void operator-();
	void operator--();
	void operator--(int);
	void operator++();
	void operator++(int);
};

	void space::operator-()
	{
	x=-x;
	y=-y;
	z=-z;
	}
void space::operator--()
{
	cout<<"postfix"<<endl;
	x--;
	y--;
	z--;
}
	void space::operator--(int)
	{
	cout<<"prefix sub"<<endl;
	--x;
	--y;
	--z;
	
	}
void space:: operator++()
	{
	cout<<"pretfix addition"<<endl;
	++x;
	++y;
	++z;
	
	}
void space::operator++(int)
	{
	cout<<"postfix addition"<<endl;
	x++;
	y++;
	z++;
	
	}

int main()
{
space s1(1,3,2);
s1.display();
-s1;
s1.display();
--s1;
s1.display();
s1--;
s1.display();
s1++;
s1.display();
++s1;
s1.display();
s1++;
s1.display();
return 0;
}

