#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "enter h1 min1  h2 min2\n";
    int h1, h2, min1, min2, t1, t2, d;
    cin >> h1 >> min1 >> h2 >> min2;
    t1 = h1 * 60 + min1;
    if (h2 > h1) {
        t2 = h2 * 60 + min2;
        d = t2 - t1;
    }
    else if (h1 > h2) {
        t2 = (h2 + 24) * 60 + min2;
        d = t2 - t1;
    }
    else if (h1 = h2 && min1 > min2) {
        t2 = (h2 + 24) * 60 + min2;
        d = t2 - t1;
    }
    else {
        d = min2 - min1;
    } 
    double c = d / 60;
    if (c >= 1) {
        double x = floor(c);
        double n = d % 60;
        cout << x << "h" << n << "m";
    }
    else {
        cout << d << "m";
    }
    return 0;
}
