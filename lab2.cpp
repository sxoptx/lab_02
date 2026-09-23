#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double Pi = 4.0 * atan(1.0);
    double alpha; //вхідний параметр
    double z1; //результат обчислення першого виразу
    double z2; //результат обчислення другого виразу
    cout << "alpha = ";
    cin >> alpha;
    double cos1 = cos(3.0 / 8.0 * Pi - alpha / 4.0);
    double cos2 = cos(11.0 / 8.0 * Pi + alpha / 4.0);
    z1 = cos1 * cos1 - cos2 * cos2;
    z2 = (sqrt(2.0) / 2.0) * sin(alpha / 2.0);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    return 0;
}