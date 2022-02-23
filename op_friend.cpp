#include<iostream>

using namespace std;

class complex
{
	
	int real,img;
	public:
	
	complex()
	{
	real=0;
	img=0;
	}
	complex(int x,int y)
	{
	real=x;
	img=y;
	}
	void display()
	{
	cout<<"\nthe value for real part"<<real<<"\nvalue of img"<<img;
	}
	friend complex operator + (complex ob1,complex ob2);
	
	/*complex operator - (complex ob)
	{
	complex temp;
	temp.real=real-ob.real;
	temp.img=img-ob.img;
	return temp;
	}
	complex operator * (complex ob)
	{
	complex temp;
	temp.real=real*ob.real;
	temp.img=img*ob.img;
	return temp;
	}
	complex operator / (complex ob)
	{
	complex temp;
	temp.real=real/ob.real;
	temp.img=img/ob.img;
	return temp;
	}*/
};
complex operator + (complex ob1,complex ob2)
	{
	complex temp;
	temp.real=ob1.real+ob2.real;
	temp.img=ob1.img+ob2.img;
	return temp;
	}

int main()
{
complex c1(6,2),c2(5,10);
complex c3;
c1.display();
c2.display();
c3.display();

cout<<"the action starts here:"<<endl;
c3=c1+c2;
c3.display();
/*cout<<"subtract"<<endl;
c3=c1-c2;
c3.display();
cout<<"multi"<<endl;
c3=c1*c2;
c3.display();
cout<<"devision"<<endl;
c3=c1/c2;
c3.display();*/
return 0;
}

