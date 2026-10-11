#include <iostream>
using namespace std;

int main() {
    // Динамічні змінні для a, b, c
    int *a = new int;
    int *b = new int;
    int *c = new int;

    cout << "Введіть значення a, b, c: ";
    cin >> *a >> *b >> *c;

    // Перевірка порожності множини {b, ..., c}
    if (*b > *c) {
        cout << "Множина {b, ..., c} порожня (b > c). Число a не належить множині Z." << endl;
        delete a;
        delete b;
        delete c;
        return 0;
    }

    // Динамічна змінна для перевірки належності
    bool *belongs = new bool((*a >= 3 && *a <= 9) && (*a >= *b && *a <= *c));

    if (*belongs) {
        cout << "Число a = " << *a << " належить множині Z." << endl;
    } else {
        cout << "Число a = " << *a << " НЕ належить множині Z." << endl;
    }

    // Звільнення пам'яті
    delete a;
    delete b;
    delete c;
    delete belongs;

    return 0;
}