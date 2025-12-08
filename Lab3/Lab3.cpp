#include <iostream>
#include <string>
using namespace std;


void main()
{
	string itemName;
	float price;
	int qty;
	float total;

	cout << "Enter Item Name: ";
	cin >> itemName;

	cout << "Enter Price: ";
	cin >> price;

	cout << "Enter Quantity: ";
	cin >> qty;

	total = price * qty;

	cout << "|||||||Invoidce|||||||" << endl;
	cout << "Item Name: " << itemName << endl;
	cout << "Price: " << price << endl;
	cout << "Quantity: " << qty << "Pcs" << endl;
	cout << "Total: " << total << endl;
	cout << "||||||||||||||||||||||" << endl;

}