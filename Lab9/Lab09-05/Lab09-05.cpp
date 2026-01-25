// TODO 1) เติม field: id, nickname, height, weight 
// TODO 2) เขียน method input(), print(), calcBMI()

#include  <iostream>
#include  <string>
using namespace std;
class Student
{
public: // TODO
	string id;
	string nickname;
	string lineId;
	string phone;
	double height; // in meters
	double weight; // in kilograms
	void input()
	{
		cout << "Enter ID : ";
		cin >> id;
		cout << "Enter Nickname : ";
		cin >> nickname;
		cout << "Enter LineId : ";
		cin >> lineId;
		cout << "Enter Phone : ";
		cin >> phone;
		cout << "Enter Height (in meters): ";
		cin >> height;
		cout << "Enter Weight (in kilograms): ";
		cin >> weight;
	}
	void print()
	{
		cout << "ID: " << id << endl;
		cout << "Nickname: " << nickname << endl;
		cout << "LineId : " << lineId << endl;
		cout << "Phone: " << phone << endl;
		cout << "Height: " << height << " m" << endl;
		cout << "Weight: " << weight << " kg" << endl;
	}
	double calcBMI()
	{
		return weight / (height * height);
	}
};
int main()
{
	Student s1;
	cout << "=== Input Student ===\n";
	// TODO: s1.input();
	s1.input();

	cout << "\n=== Student Info ===\n";
	// TODO: s1.print();
	s1.print();

	cout << "BMI : " << s1.calcBMI() << endl;

	return 0;
}

