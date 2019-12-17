// HelloSFML.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;

class Test {
public:
	Test() {
		cout << "ctor" << endl;

	}
	Test(int i) {

		cout << "parameterized ctor " << i << endl;
	}
	Test(const Test& other) {
		cout << "copy ctor" << endl;
	}
};

Test getTest() {
	return Test();
}

void check(const Test& test) {
	cout << "lvalue function" << endl;
}
void check(const Test&& test) {
	cout << "rvalue function\n";
}
int main()
{
	
	Test test1 = Test();
	Test& rtest1 = test1;

	const Test& rtest2 = getTest();

	Test rtest3(Test(1));

	Test test4 = Test();
	check(test4);
	check(getTest());
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
