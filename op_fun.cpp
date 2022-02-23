#include<iostream>

using namespace std;

class complex
{
	 private:
   	 int value;

  	 public:

   
	int real,img;
	public:
	
	complex()
	{
	real=0;
	img=0;
	value=5;
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
	
	complex operator + (complex ob)
	{
	complex temp;
	temp.real=real+ob.real;
	temp.img=img+ob.img;
	return temp;
	}
	complex operator - (complex ob)
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
	}
	    void operator ++ () {
		++value;
	    }


	   
	    void operator ++ (int) {
		value++;
	    }

	    void display1() {
		cout << "\nCount:\n" << value << endl;
	    }
};




    



int main()
{
complex c1(6,2),c2(5,10);
complex c3;
c1.display();
c2.display();
c3.display();

cout<<"the action starts here:"<<endl;
cout<<"\naddition";
c3=c1+c2;
c3.display();
cout<<"\nsubtract";
c3=c1-c2;
c3.display();
cout<<"\nmulti";
c3=c1*c2;
c3.display();
cout<<"\ndevision";
c3=c1/c2;
c3.display();
    complex count1;

    
    count1++;
    count1.display1();

    
    ++count1;

    count1.display1();
    return 0;

}

