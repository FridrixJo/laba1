#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "enter h\n";
    double h,g;
    g = 9.81;
    cin >> h;
    if (h > 0) {
        double t = sqrt(2 * h / g);
        cout << t;
    }
    return 0;
}

