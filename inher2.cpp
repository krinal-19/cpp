#include<iostream>

using namespace std;

class person
{
public:
int a1;
	void fun1()
	{
	cout<<"inside public"<<endl;
	}
private:
int a2;
	void fun2()
	{
	cout<<"inside private"<<endl;
	}
protected:
int a3;
	void fun3()
	{
	cout<<"inside protected"<<endl;
	}
};

class doctor: public person
	{
	public:
		int d()
	{
	cout<<"i am doctor"<<endl;
	}
};

int main()
{
doctor d1;
d1.fun1();
//d1.fun2();
//d1.fun3();

return 0;
}



