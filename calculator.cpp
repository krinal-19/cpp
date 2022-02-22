#include <iostream>

using namespace std;


class calculator{
public:
    void Body(){
        cout << " :: Welcome to CALCULATOR! ::" << endl;   
    }               
    int Addition(int x, int y){
        int ans = x + y;
        return ans;
    }       
    int Subtraction(int x, int y){
        int ans = x - y;
        return ans;
    }       
    int Multiplication(int x, int y){
        int ans = x * y;
        return ans;
}
           
    int Division(int x, int y){
        int ans = x / y;
        return ans;
    }
};

int main(){
int func;
int x, y;

calculator obj1; //Object
obj1.Body(); //Object

cout << "What function do you want to use? " << endl;
cout << "1 - Addition " << endl;
cout << "2 - Subtraction " << endl;
cout << "3 - Multiplication " << endl;
cout << "4 - Division " << endl;
cout << "Input: " << endl;

cin >> func;
cout << endl;

switch(func){

    case 1: //Addition
        cout << "**ADDITION**" << endl;
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " + " << y << " = "; 
        cout << obj1.Addition(x, y);
        break;          
    case 2: //Subtraction
        cout << "**SUBTRACTION**" << endl;  
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " - " << y << " = ";
        cout << obj1.Subtraction(x, y);
        break;              
    case 3: //Multiplication
        cout << "**MULTIPLICATION**" << endl;   
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " x " << y << " = ";
        cout << obj1.Multiplication(x, y);
        break;      
    case 4: //Division
        cout << "**DIVISION**" << endl; 
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << x << " / " << y << " = ";
        cout << obj1.Division(x, y);
        break;
    default:
        cout << "Invalid Input...";
        break;
}

}
