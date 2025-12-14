#include <iostream>
#include <string>

using namespace std;    

double CircleArea(double radius)
{
	return 3.14 * radius * radius;
}

double RectangleArea(double width, double height)
{
	double result = width * height;
	return result;
}

int main()
{
    double redius;// Declare readius variable;
    double result;// Declare area variable;
	cout << "Enter the radius of the circle: ";
	cin >> redius;// Input radius value;

	//result = 3.14 * redius * redius;// Calculate area value;
	//cout << "The area of the circle is: " << result << endl;// Output area value;

	result = CircleArea(redius);// Call CircleArea function to calculate area value;
	cout << "The area of the circle is: " << result << endl;// Output area value;

	//width, height
	double width, height;
	cout << "Enter width :";
	cin >> width;
	cout << "Enter height :";
	cin >> height;

	result = RectangleArea(width, height);
	cout << "The area of the rectangle is: " << result << endl;// Output area value;


   return 1;
}

