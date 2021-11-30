#include <iostream>
using namespace std;

int main()
{ 
    int x;
    cout << "enter x" << endl;
    cin >> x;
    int a = x *x;
    int n = 69 * a + 8;
    int m = x * (23 * a + 32);
    cout << m + n << " \n";
    cout << n - m;
    return 0;
} 
