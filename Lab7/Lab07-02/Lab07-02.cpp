#include <iostream>
using namespace std;

int main() {
    int score = 50;
    int* ptr = &score;

    // TODO
	cout << "Value of score:\t" << score << endl;
	cout << "Value of ptr:\t" << *ptr << endl;   
	cout << "Address of score:\t" << &score << endl;  
	cout << "Address of ptr:\t" << ptr << endl;

    return 0;
}
