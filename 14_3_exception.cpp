#include<iostream>
#include<exception>

using namespace std;
int main()
{
try{
int* myarry=new int [10000000000];
}
catch(exception &e)
{
cout<<"std exception"<<e.what()<<endl;
}

return 0;
}

