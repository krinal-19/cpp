#include<iostream>
//#include<ifstream>
//#include<ofstream>
#include<fstream>
using namespace std;
int main()
{
fstream myfile;
myfile.open("/home/krinal/c++/abc.txt",ios::in);

if(!myfile)
cout<<"the file canot open"<<endl;
return 0;
}
