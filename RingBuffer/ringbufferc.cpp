// HelloSFML.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ring.h"
using namespace std;

int main()
{
	ring<string> textring(3);
	textring.add("one");
	textring.add("two");
	textring.add("three");

	textring.add("four");
	for (int i = 0; i < textring.size(); i++) {
		cout << textring.get(i) << endl;
	}

	cout << "using iterator" << endl;
	for (ring<string>::iterator it = textring.begin(); it != textring.end(); it++) {
		cout << *it << endl;
	}
	cout << "using auto keyword" << endl;
	for (auto i : textring) {
		cout << i << endl;
	}
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
