#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "enter b1 n\n";
	double b1, n;
	cin >> b1 >> n;
	double q = 1 / (n + 1);
	double s = b1 / (1 - q);	
	cout << s;
	return 0;
}