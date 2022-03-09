#include<iostream>
#include<string>

using namespace std;

class student
{
private:
int mark;
string name;
public:

int roll_no;

void getdata(int r,string n,int m)
{
roll_no=r;
mark=m;
name=n;
}
void printdata()
{
cout<<"Roll_no:"<<roll_no<<" "<<"Name:"<<name<<" "<<"mark:"<<mark<<endl;
}

};

int main()
{
student s[3];
student *ptr=s;
for(int i=0;i<3;i++)
{
int r1;
string n1;
int m1;
cout<<"enter rollno:";
cin>>r1;
cout<<"enter name:";
cin>>n1;
cout<<"enter mark:";
cin>>m1;
ptr->getdata(r1,n1,m1);
ptr->printdata();
ptr++;
}

return 0;
}




