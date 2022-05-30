#include <string>
#include <iostream>
using namespace std;

class dog {
public:
    string breed;
    string color;
    int height;
    int weight;
    void shake()
    {
        cout << "Shake \n";
    }
    void sit()
    {
        cout << "Sit \n";
    }
    void layDown()
    {
        cout << "Lay down \n";
    }
};

int main()
{
    dog obj;
    obj.breed = "Hound";
    obj.color = "Brown";
    obj.height = 2;
    obj.weight = 60;
    obj.shake();
    obj.sit();
    obj.layDown();
    cout << obj.breed << "\n" << obj.color << "\n" << obj.height << "\n" << obj.weight << "\n";
}


