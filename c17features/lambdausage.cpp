#include <iostream>
#include <functional>
#include <string>
using namespace std;

void logger(std::function<void(string)> printer) {
    printer("this is from the logger Hello World");
}

int main() {
    
    // Lambda function
    auto printer = [](string message) {
        cout << message << endl;
    };

    logger(printer);

    return 0;
}

