#include <iostream>
#include <string>
using namespace std;


void functionOne()
{
	cout << "This is the first one\n";
}

int functionTwo(int x, int y, int z)
{
	cout << (x + y + z) << "\n";
	return 0;
}

int functionTwo(int x, int y)
{
	cout << (x - y) << "\n";
	return 0;
}

void swapNums(int& x, int& y) {
	int z = x;
	x = y;
	y = z;
}

class classOne {
	public:
		string name;
		int num;
		void myMethod();
		//{
			//cout << "This is the method\n";
		//}
};

void classOne::myMethod()
{
	cout << "Outside method\n";
}
int main()
{
	functionOne();

	functionTwo(10, 5);

	int firstNum = 10;
	int secondNum = 20;
	cout << "Before swap: " << "\n";
	cout << firstNum << secondNum << "\n";
	swapNums(firstNum, secondNum);
	cout << "After swap: " << "\n";
	cout << firstNum << secondNum << "\n";

	classOne myObj;
	myObj.name = "Jess";
	myObj.num = 19;
	myObj.myMethod();

	classOne myObj1;
	myObj1.name = "Jp";
	myObj1.num = 23;

	cout << myObj.name << '\n';
	cout << myObj.num << '\n';
	cout << myObj1.name << '\n';
	cout << myObj1.num << '\n';
	return 0;
}

