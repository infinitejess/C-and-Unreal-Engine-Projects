#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int salary;
};

class Person {
    public:
        void myFunction() {
        cout << "This is a test" << "\n";
        }
};

class myChild: public Person {

};

class myGrandchild : public myChild {

};

class Programmer : public Employee, public Person
{
public:
    int bonus;
    void setSalary(int s) {
        salary = s;
    }
    int getSalary() {
        return salary;
    }

};

//polymorphism example
class Animal {
    public:
        void animalSound() {
            cout << "The animal makes a sound \n";
        }
};

class Pig : public Animal {
    public:
        void animalSound() {
            cout << "The pig says: wee wee \n";
        }
};

int main()
{
    Programmer obj;
    obj.setSalary(50000);
    obj.bonus = 15000;
    cout << "Salary: " << obj.getSalary() << "\n";
    cout << "Bonus: " << obj.bonus << "\n";
    obj.myFunction();
   
    myGrandchild obj1;
    obj1.myFunction();

    Animal myAnimal;
    Pig myPig;
    myPig.animalSound();

    try {
        int age = 15;
        if (age >= 18)
        {
            cout << "Access granted - you are old enough";
        }
        else {
            throw(age);
        }
    }
    catch (int myNum)
    {
        cout << "Access denied - you must be 18 years or older";
        cout << "Age is: " << myNum;
    }

    return 0;
    
}


