#include<iostream>

using namespace std;

class test
{
int mark;
float spi;
public:
void setdata()
{
this->mark=70;
this->spi=6.5;
}

void DisplayData()
{
cout<<"mark="<<mark;
cout<<"spi="<<spi;
}
};
class test2:public test
{


int main()
{
test o1;
o1.setdata();
o1.display();
}

