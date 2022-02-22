#include<iostream>

using namespace std;

class Distance
{
public:
int feet;
int inch;

	Distance(int x,int y)
	{
		cout<<"feet is:"<<x<<"inch is:"<<y<<endl;
	}

	~Distance()
	{
		cout<<"destruct called";
	}
	};
int main()
{
Distance d1(5,8);

return 0;
}

