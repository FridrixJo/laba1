#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "enter a b n\n";
    double a, b, n;
    cin >> a >> b >> n;
    double d,sum;
    d = (b - a) / 99;
    sum = (2 * a + (n + 10 - 1) * d) / 2 * (n + 10);
    cout << "разность арифметической прогрессии: " << d << endl;
    cout << "сумма прогрессии: " << sum;
    return 0;
}

