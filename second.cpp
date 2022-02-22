#include<iostream>

using namespace std;

class calculator
{
public:
int input1;
int input2;
	//int add();         //when function outside class
	void setin(int a,int b)
	{
		input1=a;
		input2=b;
	}
//function inside the class

	/*int add()
	{
		int add;
		return input1+input2;
	}*/
//passing object as function arguments
	/*int add(calculator obj1,calculator obj2)
	{
		return obj1.input1+obj2.input1;	
		
	}*/
//};
	//returning object from a function
	calculator add(calculator obj1,calculator obj2)
	{
		calculator obj3;
		obj3.input1= obj1.input1+obj2.input2;
		obj3.input2= obj1.input1+obj2.input2;
		return obj3;
	}

	};
//Function definition outside class
	/*int calculator::add()
		{
			
			return input1+input2;
		}
*/
int main()
{
calculator obj1,obj2,obj3;
obj1.setin(10,2);
obj2.setin(20,2);
obj3=obj1.add(obj1,obj2);
cout<<"result:"<<obj3.input1<<" "<<obj3.input2;
//cout<<"the input:"<<obj1.input1<<" "<<obj1.input2<<endl;
//cout<<"the sum of inputs is:"<<obj1.add(obj1,obj2);
//add(obj1,obj2);

return 0;

}


