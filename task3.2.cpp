#include <iostream>
#include <cmath>

int main() {
    double *x = new double;
    double *epsilon = new double;

    std::cout << "Enter x (-1 < x < 1): ";
    std::cin >> *x;
    std::cout << "Enter epsilon: ";
    std::cin >> *epsilon;

    if (std::abs(*x) >= 1) {
        std::cout << "x must be in range (-1, 1)" << std::endl;
        delete x;
        delete epsilon;
        return 0;
    }

    double *sum = new double(0.0);
    double *a = new double(*x);
    int *n = new int(0);

    while (std::abs(*a) > *epsilon) {
        *sum += *a;
        (*n)++;
        *a *= (*x * *x) * (2 * *n - 1) / (2 * *n + 1);
    }

    double *approx = new double(2 * *sum);
    double *real_val = new double(std::log((1 + *x) / (1 - *x)));

    std::cout << "Approx ln((1+x)/(1-x)) = " << *approx << std::endl;
    std::cout << "Real ln((1+x)/(1-x))   = " << *real_val << std::endl;
    std::cout << "Iterations: " << *n << std::endl;

    delete x;
    delete epsilon;
    delete sum;
    delete a;
    delete n;
    delete approx;
    delete real_val;

    return 0;
}