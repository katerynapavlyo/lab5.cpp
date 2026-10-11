#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Динамічні змінні для x та y
    double *x = new double;
    double *y = new double;

    cout << "Введіть x та y: ";
    cin >> *x >> *y;

    // Динамічна змінна для результату z
    double *z = new double;

    if (*y < *x) {
        *z = (*y) * exp(*x);
    } else if (*y == *x) {
        *z = (*y) * (*x);
    } else {
        *z = (*x) * exp(*y);
    }

    cout << "Результат z: " << *z << endl;

    // Звільнення пам'яті
    delete x;
    delete y;
    delete z;

    return 0;
}