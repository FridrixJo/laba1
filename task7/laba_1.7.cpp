#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "enter x y\n";
    long int x, y;
    cin >> x >> y;
    y = x + y;
    x = y - x;
    y = y - x;
    cout << x << " " << y;
    return 0;
}