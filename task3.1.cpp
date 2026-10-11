#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Динамічні змінні для a та n
    double *a = new double;
    int *n = new int;

    cout << "Введіть дійсне число a: ";
    cin >> *a;
    cout << "Введіть натуральне число n (n > 0): ";
    cin >> *n;

    if (*a == 0 || *n <= 0) {
        cout << "Некоректні вхідні дані (a не може дорівнювати 0, n має бути > 0)." << endl;
        delete a;
        delete n;
        return 0;
    }

    // Динамічні змінні для лічильника циклу та суми
    double *sum = new double(0.0);
    int *i = new int(*n);

    while (*i >= 1) {
        *sum += log(fabs(pow(*a, *i)));
        (*i)--;
    }

    cout << "Сума S: " << *sum << endl;

    // Звільнення пам'яті
    delete a;
    delete n;
    delete sum;
    delete i;

    return 0;
}