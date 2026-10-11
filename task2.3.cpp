#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Динамічні змінні для координат вершин A, B, C
    double *x1 = new double; double *y1 = new double;
    double *x2 = new double; double *y2 = new double;
    double *x3 = new double; double *y3 = new double;

    cout << "Введіть координати A (x1 y1): ";
    cin >> *x1 >> *y1;
    cout << "Введіть координати B (x2 y2): ";
    cin >> *x2 >> *y2;
    cout << "Введіть координати C (x3 y3): ";
    cin >> *x3 >> *y3;

    // Динамічні змінні для довжин сторін
    double *ab = new double(sqrt(pow(*x2 - *x1, 2) + pow(*y2 - *y1, 2)));
    double *bc = new double(sqrt(pow(*x3 - *x2, 2) + pow(*y3 - *y2, 2)));
    double *ac = new double(sqrt(pow(*x3 - *x1, 2) + pow(*y3 - *y1, 2)));

    // Перевірка, чи трикутник існує
    if (*ab + *bc <= *ac || *ab + *ac <= *bc || *bc + *ac <= *ab) {
        cout << "Трикутник із такими координатами не існує (точки на одній прямій)." << endl;
    } else {
        const double eps = 1e-9;
        bool *is_isosceles = new bool(
            fabs(*ab - *bc) < eps || 
            fabs(*bc - *ac) < eps || 
            fabs(*ab - *ac) < eps
        );

        if (*is_isosceles) {
            cout << "Трикутник є рівнобедреним." << endl;
        } else {
            cout << "Трикутник НЕ є рівнобедреним." << endl;
        }

        delete is_isosceles;
    }

    // Звільнення пам'яті
    delete x1; delete y1;
    delete x2; delete y2;
    delete x3; delete y3;
    delete ab; delete bc; delete ac;

    return 0;
}