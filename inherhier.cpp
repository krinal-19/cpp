#include<iostream>

using namespace std;

class person
{
public:
int age;
float height,weight;

	person()
	{
	age=0;
	height=0;
	weight=0;
	}
	person(int a,int h,int w)
	{
	age=a;
	height=h;
	weight=w;
	}

	void talk()
	{
	cout<<"talk out"<<endl;
	}

	void walk()
	{
	cout<<"walk well"<<endl;
	}
	void display()
	{
	cout<<"age= "<<age<<"height= "<<height<<"weight= "<<weight<<endl;
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

	class footballer:public person
	{
	public:
int f()
		{
		cout<<"i am footballer"<<endl;
		}
};

int main()
{
person p1(20,4.5,50);
p1.talk();
p1.walk();
p1.display();
doctor d1;
d1.talk();
d1.walk();
d1.display();
footballer f1;
f1.talk();
f1.walk();
f1.display();
return 0;
}


