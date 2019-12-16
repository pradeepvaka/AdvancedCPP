// HelloSFML.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;

class Test {
		
public:
	Test() {
		cout << "ctor " << endl;
	}

	Test(int i) {
		cout << "parameterized ctor" << endl;
	}

	Test(const Test& other) {
		cout << "copy ctro" << endl;
	}


	Test& operator=(const Test& other) {
		cout << "assignment " << endl;
		return *this;
	}
	~Test() {
		cout << "destructor" << endl;
	}
	friend ostream& operator<<(ostream& out, const Test& test);

};

ostream& operator<<(ostream& out, const Test& test) {
	out << "Hello from test";
	return out;
}

Test getTest() {
	return Test();
}

int main()
{
	Test test1 = getTest();

	cout << test1 << endl;
	vector<Test> vec;

	//we can see that Test() is created and copy ctor is used to push it to vector.
	vec.emplace_back(Test());
	return 0;
}

