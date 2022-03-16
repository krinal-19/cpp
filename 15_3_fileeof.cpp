#include<iostream>
#include<fstream>

using namespace std;

int main()
{
ifstream input;
string str,str1;
input.open("data.txt");
if(!input)
cout<<"file did not open"<<endl;
else
{
while(!input.eof())
{
input>>str>>str1;
cout<<str<<'\t'<<str1<<endl;;

}
}
input.close();
return 0;
}

