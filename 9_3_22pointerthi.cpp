#include<iostream>
using namespace std;

class base
{

public:
void showbase()
{
cout<<"base\n";
}
};
class derv1:public base
{
public:
void showder()
{
cout<<"derived\n";
}
};
int main()
{
derv1 d1;
base *ptr;
ptr=&d1;
ptr->showbase();
ptr->showder();
//((derv1 *)ptr)->show();
}
