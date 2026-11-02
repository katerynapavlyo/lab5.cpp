#include <iostream>
#include <cmath>

int main() {
    double *x = new double;
    double *y = new double;
    double *z = new double;

    std::cout << "Enter x: ";
    std::cin >> *x;

    std::cout << "Enter y: ";
    std::cin >> *y;

    if (*y < *x) {
        *z = *y * std::exp(*x);
    } 
    else if (*y == *x) {
        *z = *y * *x;
    } 
    else {
        *z = *x * std::exp(*y);
    }

    std::cout << "Result z = " << *z << std::endl;

    delete x;
    delete y;
    delete z;

    return 0;
}