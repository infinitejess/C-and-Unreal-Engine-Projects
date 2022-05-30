#include <string>
#include <iostream>
using namespace std;

class myClass
{
public:
    string brand;
    string model;
    int year;
    myClass(string x, string y, int z);
};

myClass::myClass(string x, string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }

class Employee {
    private:
        int salary;
    public:
        void setSalary(int s) {
            salary = s;
        }
        int getSalary() {
            return salary;
        }
};

int main()
{
    myClass obj("Toyota", "Camry", 2022);
    cout << obj.brand << " " << obj.model << " " << obj.year << "\n";

    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary();
    return 0;
}
