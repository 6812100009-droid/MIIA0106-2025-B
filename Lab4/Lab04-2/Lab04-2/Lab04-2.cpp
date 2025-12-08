#include <iostream>
using namespace std;

int main() {
	int num;
	for (num = 2; num <= 20; num += 2) 
	{
		cout << num;
		if (num < 20) cout << ' ';
	}
	cout << endl;
	return 0;
}