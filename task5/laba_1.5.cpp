#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "enter a u0 t\n";
    double a, u0, t;
    cin >> a >> u0 >> t;  
    double s = u0 * t + a * t * t / 2;
    s = abs(s);
    cout << s;
    return 0;
}
