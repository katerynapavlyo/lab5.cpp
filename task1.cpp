#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double *a = new double;
    double *b = new double;
    double *angle_deg = new double;

    cout << "Enter sides a and b of the triangle: ";
    cin >> *a >> *b;

    cout << "Enter the angle between them (in degrees): ";
    cin >> *angle_deg;

    if (*a <= 0 || *b <= 0 || *angle_deg <= 0 || *angle_deg >= 180) {
        cout << "A triangle with these parameters does not exist." << endl;
        delete a;
        delete b;
        delete angle_deg;
        return 0;
    }

    const double PI = 3.14159265358979323846;
    double *angle_rad = new double(*angle_deg * PI / 180.0);
    double *area = new double(0.5 * (*a) * (*b) * sin(*angle_rad));

    cout << "Area of the triangle: " << *area << endl;

    delete a;
    delete b;
    delete angle_deg;
    delete angle_rad;
    delete area;

    return 0;
}