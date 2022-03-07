#include<iostream>

using namespace std;

class person//base class
{
public:
int age;
float height,weight;

	person()//default constructor 
	{
	age=0;
	height=0;
	weight=0;
	}
	person(int a,int h,int w)//parameterized constructor
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

	class doctor: public person//derived class
	{
	public:
		int d()
	{
	cout<<"i am doctor"<<endl;
	}
};

	class doctor1:public doctor
	{
	public:
	int d1()
		{
		cout<<"doctor 1 derived from doctor"<<endl;
		}

};
	class doctor2:public doctor
	{
	public:
	int d2()
		{
		cout<<"doctor 2 derived from doctor"<<endl;
		}
};
	class doctor3:public doctor1,public doctor2
	{
	public:
	int d3()
		{
		cout<<"doctor3 derived from doctor1 and doctor 2"<<endl;
		}
};


int main()
{
person p1(20,4.5,50);
p1.talk();
p1.walk();
p1.display();
doctor d;
d.talk();
d.walk();
//d1.display();
cout<<"doctor1"<<endl;
doctor1 d1;
d1.talk();
d1.walk();
cout<<"doctor2"<<endl;
doctor2 d2;
d2.talk();
d2.walk();
cout<<"doctor3"<<endl;
doctor3 d3;
d3.d1();
d3.d2();

return 0;
}


