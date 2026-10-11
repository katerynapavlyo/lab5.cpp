#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Динамічні змінні для сторін та кута
    double *a = new double;
    double *b = new double;
    double *angle_deg = new double;

    cout << "Введіть дві сторони трикутника a, b: ";
    cin >> *a >> *b;

    cout << "Введіть кут між ними (у градусах): ";
    cin >> *angle_deg;

    // Перевірка коректності вхідних даних
    if (*a <= 0 || *b <= 0 || *angle_deg <= 0 || *angle_deg >= 180) {
        cout << "Трикутник із такими параметрами не існує." << endl;
        delete a;
        delete b;
        delete angle_deg;
        return 0;
    }

    // Динамічна змінна для кута в радіанах та для площі S
    const double PI = 3.14159265358979323846;
    double *angle_rad = new double(*angle_deg * PI / 180.0);
    double *S = new double(0.5 * (*a) * (*b) * sin(*angle_rad));

    cout << "Площа трикутника: " << *S << endl;

    // Звільнення пам'яті
    delete a;
    delete b;
    delete angle_deg;
    delete angle_rad;
    delete S;

    return 0;
}