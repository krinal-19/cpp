#include<iostream>
#include<fstream>

using namespace std;

int main()
{
ifstream input;
string str;
input.open("data.txt");
if(!input)
cout<<"file did not open"<<endl;
else
{
/*while(!input.eof())
{
input>>str;
cout<<str<<" ";

}
}*/
cout<<"file opening"<<endl;
while(getline(input,str))
{
cout<<str<<endl;
}
}
input.close();
return 0;
}

