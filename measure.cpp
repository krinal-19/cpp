#include <iostream>
using namespace std;

class measure {

  

   public:
    double length;
    double width;
    double height;

    
    void setinput(double len, double wid, double hgt) {
        length = len;
       	width = wid;
        height = hgt;
    }

    double Area() {
        return length * width;
    }

    double Volume() {
        return length * width * height;
    }
};

int main() {

    
   measure obj1;
   measure obj2;
    
    obj1.setinput(42.5, 30.8, 19.2);
    obj2.setinput(10,20,30);
    cout << "Area of Room1 =  " << obj1.Area() << endl;
    cout << "Volume of Room1 =  " << obj1.Volume() << endl;
    cout << "Area of Room2 =  " << obj2.Area() << endl;
    cout << "Volume of Room2 =  " << obj2.Volume() << endl;

    return 0;
}
