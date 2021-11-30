#include <iostream>
#include <cmath>
using namespace std;

double length(int n1, int n2, int m1, int m2){
	double q = sqrt((n1 - n2)* (n1 - n2) + (m1 - m2) * (m1 - m2));
	return q;
}

double median(double a1, double a2, double a3){
	double b = sqrt(2 * a1 * a1 + 2 * a2 * a2 - a3 * a3) / 2;
	return b;
}

double bis(double d1, double d2, double d3){
	double k = sqrt(d1 * d2 * (d1 + d2 + d3) * (d1 + d2 - d3)) / (d1 + d2);
	return k;
}

double cos(double n1, double n2, double n3) {
	double x = (n3 * n3 - n1 * n1 - n2 * n2) / (-2 * n1 * n2);
	double deg = acos(x);
	return deg;
}

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "enter x1 y1  x2 y2  x3 y3\n";
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double l1 = length(x1, x2, y1, y2);
	double l2 = length(x2, x3, y2, y3);
	double l3 = length(x1, x3, y1, y3);

	double P = l1 + l2 + l3;
	double p = P / 2;
	double s = sqrt(p * (p - l1) * (p - l2) * (p - l3));

    double h1 = 2 * s / l2;
	double h2 = 2 * s / l3;
	double h3 = 2 * s / l1;

	double m1 = median(l2, l3, l1);
	double m2 = median(l1, l3, l2);
	double m3 = median(l1, l2, l3);

	double b1 = bis(l2, l3, l1);
	double b2 = bis(l1, l3, l3);
	double b3 = bis(l1, l3, l2);

	double R = l1 * l2 * l3 / (4 * s);
	double r = sqrt((p - l1) * (p - l2) * (p - l3) / p);

	double deg1 = cos(l2, l3, l1);
	double deg2 = cos(l1, l3, l2);
	double deg3 = cos(l1, l2, l3);

	double rad = 57.2958;
	double gr1 = deg1 * rad;
	double gr2 = deg2 * rad;
	double gr3 = deg3 * rad;

	double pi = 3.14159265;
	double S_circle = pi * R * R;
	double s_circle = pi * r * r;
	double L_circle = 2 * pi * R;
	double l_circle = 2 * pi * r;

	cout << "длины сторон треугольника: " << l1 << " " << l2 << " " << l3 << "\n";
	cout << "длины высот треугольника: " << h1 << " " << h2 << " " << h3 << "\n";
	cout << "длины медиан треугольника: " << m1 << " " << m2 << " " << m3 << "\n";
	cout << "длины биссектрис треугольника: " << b1 << " " << b2 << " " << b3 << "\n";
	cout << "градусная мера углов: " << gr1 << " " << gr2 << " " << gr3 << "\n";
	cout << "радианная мера углов: " << deg1 << " " << deg2 << " " << deg3 << "\n";
	cout << "радиус описанной окружности: " << R << " радиус вписанной окружности: " << r << " \n";
	cout << "площадь описанной окружности: " << S_circle << " площадь вписанной окружности: " << s_circle << " \n";
	cout << "длина описанной окружности: " << L_circle << " длина вписанной окружности: " << l_circle << " \n ";
	cout << "площадь треугольника: " << s << " периметр треугольника: " << P << " \n";

	return 0;
}