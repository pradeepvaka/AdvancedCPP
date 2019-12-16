// HelloSFML.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;

class Test {
private:
	static const int SIZE = 100;
	int* _pBuffer;
public:
	Test() {
		cout << "ctor" << endl;
		_pBuffer = new int[SIZE];
	}
	Test(int i) {
		cout << "parameterized ctor" << endl;
		_pBuffer = new int[SIZE];
		for (int i = 0; i < SIZE; i++) {
			_pBuffer[i] = i;
		}
	}
	Test(const Test& other) {
		cout << "copy ctor" << endl;
		_pBuffer = new int[SIZE];
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
	}
	~Test() {
		cout << "dtor" << endl;
		delete [] _pBuffer;

	}
	Test& operator=(const Test& other) {
		cout << "assignment operator" << endl;
		_pBuffer = new int[SIZE];
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
		return *this;
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
	vec.push_back(Test());
	return 0;
}

