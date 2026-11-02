#include <iostream>
#include <cmath>

int main() {
    double *x1 = new double;
    double *y1 = new double;
    double *x2 = new double;
    double *y2 = new double;
    double *x3 = new double;
    double *y3 = new double;

    std::cout << "Enter A (x1 y1): ";
    std::cin >> *x1 >> *y1;
    std::cout << "Enter B (x2 y2): ";
    std::cin >> *x2 >> *y2;
    std::cout << "Enter C (x3 y3): ";
    std::cin >> *x3 >> *y3;

    double *side1 = new double(std::sqrt(std::pow(*x2 - *x1, 2) + std::pow(*y2 - *y1, 2)));
    double *side2 = new double(std::sqrt(std::pow(*x3 - *x2, 2) + std::pow(*y3 - *y2, 2)));
    double *side3 = new double(std::sqrt(std::pow(*x1 - *x3, 2) + std::pow(*y1 - *y3, 2)));

    if (*side1 + *side2 > *side3 && *side1 + *side3 > *side2 && *side2 + *side3 > *side1) {
        if (*side1 == *side2 || *side2 == *side3 || *side3 == *side1) {
            std::cout << "The triangle is isosceles." << std::endl;
        } 
        else {
            std::cout << "The triangle is NOT isosceles." << std::endl;
        }
    } 
    else {
        std::cout << "Error: The points do NOT form a triangle." << std::endl;
    }

    delete x1;
    delete y1;
    delete x2;
    delete y2;
    delete x3;
    delete y3;
    delete side1;
    delete side2;
    delete side3;

    return 0;
}