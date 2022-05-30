#include <string>
#include <iostream>
using namespace std;

class shape {
public:
    string color;
    void getArea() {
        cout << "Used to find the area";
    }
};

class rectangle : public shape {
    public:
     int height;
     int width;
     void getArea()
     {
         cout << height * width << "\n";
     }
};

class triangle : public shape {
public:
    int base;
    int height;
    void getArea()
    {
        cout << (base * height) / 2 << "\n";
    }
};

class circle : public shape {
public:
    int radius;
    void getArea()
    {
        cout << 3.14159 * radius * radius << "\n";
    }
};

int main()
{
    rectangle obj;
    obj.color = "red";
    obj.height = 10;
    obj.width = 12;
    obj.getArea();
    cout << obj.color << "\n";

    triangle obj1;
    obj1.color = "blue";
    obj1.height = 10;
    obj1.base = 12;
    obj1.getArea();
    cout << obj1.color << "\n";

    circle obj2;
    obj2.color = "yellow";
    obj2.radius = 10;
    obj2.getArea();
    cout << obj2.color << "\n";
  
}

