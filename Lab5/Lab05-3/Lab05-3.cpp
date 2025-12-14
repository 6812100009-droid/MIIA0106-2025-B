#include <iostream>
#include <string>
using namespace std;

void swapValues(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "Inside swapValuve Function :  " << endl;
	cout << " a = " << a << " b = " << b << endl;
}
void swapRef(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "Inside swapValuve Function :  " << endl;
	cout << " a = " << a << " b = " << b << endl;
}
int main()
{
	int  a, b;
	cout << "Enter a integers: ";
	cin >> a;
	cout << "Enter b integers: ";
	cin >> b;
	cout << "Before swapValuve Function :  " << endl;
	cout << " a = " << a << " b = " << b << endl;
	swapValues(a, b);
	cout << "After swapValuve Function :  " << endl;
	cout << " a = " << a << " b = " << b << endl;
	swapRef(a, b);
	cout << " a = " << a << " b = " << b << endl;

	return 1;
}

