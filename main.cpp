#include <iostream>

float calculator(float a, char op, float b) {
    return a+b;
}
float calculator1(float a, char op, float b) {
    return a-b;
}
float calculator2(float a, char op, float b) {
    return a*b;
}
float calculator3(float a, char op, float b) {
    return a/b;
}

int main() {
    float a = 3.4, b = 2.5, result;
    char operation = '/';

    if ('+' == operation){
        std::cout << calculator(a, operation, b) << '\n';
    }
    else if ('-' == operation){
        std::cout << calculator1(a, operation, b) << '\n';
    }
    else if ('*' == operation){
        std::cout << calculator2(a, operation, b) << '\n';
    }
    else if ('/' == operation){
        std::cout << calculator3(a, operation, b) << '\n';
    }
    return 0;
}