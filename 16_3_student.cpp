#include<iostream>
#include<fstream>
using namespace std;

class student
{
	public:
	int roll;
	char name[25];
	float marks;
void getdata()
	{
	cout<<"enter roll no and name"<<endl;
	cin>>roll>>name;
	cout<<"marks"<<endl;
	cin>>marks;
	}

void addrecord()
	{
	fstream f;
	student s;
	f.open("student.dat",ios::app|ios::binary);
	//f.open("student.dat",ios::app);
	s.getdata();
	f.write((char*)&s,sizeof(s));f.close();
	}
};

int main()
{
student s1;
s1.getdata();
s1.addrecord();
return 0;
}

