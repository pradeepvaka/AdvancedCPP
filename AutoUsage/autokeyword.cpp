// HelloSFML.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template <class T, class S >
auto test(T value1, S value2) -> decltype(value1 + value2) {
	return value1+ value2;
}
int get() {
	return 999;
}
auto test2() -> decltype(get()) {
	return get();
}


int main()
{
	auto value = 9;
	auto text = "Hello";
	cout << value <<" "<< text << endl;
	cout<<test(2, 3) << endl;
	cout<<test2() << endl;
	cout << "Hello World!\n";
	
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
