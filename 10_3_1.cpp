//runtime virtualfunction
#include<iostream>
using namespace std;

class base
{
public:
virtual void show()
{
cout<<"base\n";
}
};
class derv1:public base
{
public:
void show()
{
cout<<"derv1\n";
}
};

class derv2 : public base
{
public:
void show()
{
cout<<"derv2\n";
}
};

int main()
{
derv1 d1;
derv2 d2;
base *ptr;
ptr=&d1;
ptr->show();
ptr = &d2;
ptr->show();
return 0;
}


