#include<iostream>
using namespace std;


class base1
{
protected:
int i;
public:
base1()
{
cout<<"defaul";

}
base1(int x)
{
i=x;
cout<<"constructing base1";
}
~base1()
{
cout<<"destructing base1\n";
}
};

class base2
{
protected:
int k;
public:
base2()
{
}
base2(int x)
{
k=x;cout<<"construting base2";
}
~base2()
{
cout<<"destructing base2 ";
}
};

class derived:public base1, public base2
{
int j;
public:
derived()
{
}
derived(int x,int y,int z):base1(y),base2(z)
{
j=x;
cout<<"constructing derived \n";
}
~derived()
{
cout<<"destructing derived\n";
}
void show()
{
cout<<i<<" "<<j<<" "<<k;
}
};

int main()
{
derived d1(10,3,4);
d1.show();
return 0;
}
