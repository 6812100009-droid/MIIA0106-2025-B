#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	for (int num = 1; num <= 100; ++num) {
		sum += num;
	}
	cout << "SUM 1-100 = " << sum << endl;
	return 0;
}