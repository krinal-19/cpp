#include<iostream>
using namespace std;


void test(int test)
{
cout<<"inside test,test is:"<<test<<"\n";
if(test)
throw test;
}

int main()
{
cout<<"start\n";
try{
cout<<"inside try block\n";
test(0);
test(1);
test(2);
}
catch(int i)
{
cout<<"caugth an exception --value is:";
cout<<i<<"\n";
}
cout<<"end";
return 0;
}

