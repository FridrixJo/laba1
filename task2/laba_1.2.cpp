#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, k, x, d, e;
    e = 2.71403589346752856676237465;
    cout << "enter x d c k\n";
    cin >> x >> d >> c >> k;
    if (x > 0 && k != 0) {
        double y;
        a = log10(x);
        b = x + pow(e,d);
        y = (a + b) - (c * c / k);
        cout << y;
    }
    else {
        cout << "NAN";
    }
    return 0;
}

