#include <iostream>
#include <string>
using namespace std;

int maxofThree(int a, int b, int c)
{
	if (a >= b && a >= b)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;
}
int minofThree(int a, int b, int c)
{
	if (a <= b && a <= b)
		return a;
	else if (b <= a && b <= c)
		return b;
	else
		return c;
}
int main()
{
	int  a, b, c;
	int maxvaluve = 1000000;
	int minvaluve = -1000000;
	cout << "Enter a integers: ";
	cin >> a;
	cout << "Enter b integers: ";
	cin >> b;
	cout << "Enter c integers: ";
	cin >> c;

	maxvaluve = maxofThree(a, b, c);
	cout << "The maximum value is: " << maxvaluve << endl;
	minvaluve = minofThree(a, b, c);
	cout << "The minimum value is: " << minvaluve << endl;
	return 0;
}
