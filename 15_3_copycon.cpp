#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream fin,fout;
	fin.open("data.txt");
	fout.open("data1.txt");
//fin.open ("example.txt", ios::out | ios::in );
	char ch;
while(!fin.eof())
{
fin.get(ch);
fout<<ch;
}
cout<<"copy done!"<<endl;
fin.close();
fout.close();

}
