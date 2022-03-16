#include<iostream>
#include<exception>
using namespace std;

int main(){
int a=1;
try{
	try{
		throw a;
	}
	catch(int x){
		cout<<"\nexcpation in innner try catch block";
		throw x;
	}
}
catch (int a){
	cout<<"excption in outer try catch block:\n"<<a;
}
cout<<"\nend program";
}

