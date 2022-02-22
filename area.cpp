#include <iostream>
using namespace std;

class Room {

  

   public:
    double length;
    double breadth;
    double height;

    // function to initialize private variables
    void getData(double len, double brth, double hgt) {
        length = len;
        breadth = brth;
        height = hgt;
    }

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    // create object of Room class
    Room room1;
    Room room2;
    // pass the values of private variables as arguments
    room1.getData(42.5, 30.8, 19.2);
    room2.getData(10,20,30);
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room2.calculateVolume() << endl;

    return 0;
}
