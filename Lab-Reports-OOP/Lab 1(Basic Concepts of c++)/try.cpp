#include <iostream>

int main() {
    int num1 = 10;
    float num2 = 3.5;
    char ch = 'A';

    // Automatic type conversion during arithmetic operations
    float result = num1 + num2;
    std::cout << "Result: " << result << std::endl;

    // Automatic type conversion during assignment
    int convertedNum = ch;
    std::cout << "Converted Num: " << convertedNum << std::endl;

    return 0;
}

