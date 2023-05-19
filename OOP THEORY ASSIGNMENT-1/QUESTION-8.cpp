#include <iostream>
using namespace std;
float perimeter(int r)
{
	return 2 * 3.14 * r;
}
int perimeter(int l , int b)
{
	return 2 * (l + b);
}
int perimeter(int base, int h, int m)
{
	return base + h + m;
}
int main()
{
	int n, l, b, h, m, base;
	cout << "Enter the radius:";
	cin >> n;
	cout << "The perimeter of the circle is " << perimeter(n) << '\n';
	cout << "Enter the sides of the rectangle:";
	cin >> l >> b;
	cout << "The perimeter of the rectangle is " << perimeter(l, b) << '\n';
	cout << "Enter the sides of the triangle:";
	cin >> h >> base >> m;
	cout << "The perimeter of the triangle is " << perimeter(base, h, m) << '\n';
}
