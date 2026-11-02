#include <iostream>
#include <cmath>

int main() {
    double *a = new double;
    int *n = new int;

    std::cout << "Enter a real number a: ";
    std::cin >> *a;
    std::cout << "Enter a natural number n (n > 0): ";
    std::cin >> *n;

    if (*a == 0) {
        std::cout << "Error: ln|0| is undefined!" << std::endl;
        delete a;
        delete n;
        return 1;
    }

    if (*n <= 0) {
        std::cout << "Error: n must be a positive integer!" << std::endl;
        delete a;
        delete n;
        return 1;
    }

    double *sum = new double(0.0);
    int *i = new int(1);

    for (; *i <= *n; ++(*i)) {
        *sum += std::log(std::abs(std::pow(*a, *i)));
    }

    std::cout << "Result: " << *sum << std::endl;

    delete a;
    delete n;
    delete sum;
    delete i;

    return 0;
}