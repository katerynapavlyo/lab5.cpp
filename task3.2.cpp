#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Динамічні змінні для x та точності eps
    double *x = new double;
    double *eps = new double;

    cout << "Введіть x (|x| < 1): ";
    cin >> *x;

    if (fabs(*x) >= 1.0) {
        cout << "Умова |x| < 1 не виконується." << endl;
        delete x;
        delete eps;
        return 0;
    }

    cout << "Введіть точність eps (наприклад 0.00001): ";
    cin >> *eps;

    // Динамічні змінні для доданка, лічильника кроків та суми
    double *term = new double(*x);
    int *n = new int(0);
    double *sum = new double(0.0);

    while (fabs(*term) >= *eps) {
        *sum += *term;
        (*n)++;
        *term = (*term) * (*x) * (*x) * (2 * (*n) - 1) / (2 * (*n) + 1);
    }

    // Динамічна змінна для підсумкового результату
    double *result = new double(2.0 * (*sum));

    cout << "Обчислена сума ряду: " << *result << endl;
    cout << "Кількість доданих членів: " << *n << endl;

    // Звільнення пам'яті
    delete x;
    delete eps;
    delete term;
    delete n;
    delete sum;
    delete result;

    return 0;
}