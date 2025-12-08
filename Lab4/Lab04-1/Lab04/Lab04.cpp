#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "for 1-10:" << endl; // แสดงเลข 1-10 โดยใช้ลูป for
    for (int i = 1; i <= 10; ++i) {
        cout << i;
        if (i < 10) 
        cout << " ";
    }
    cout << endl;
	cout << "===========================" << endl;
    cout << "while 1-10" << endl; // แสดงเลข 1-10 โดยใช้ลูป while
    int i = 1;
    while (i <= 10) { cout << i;
        if (i < 10) 
            cout << " "; ++i;
    }
    cout << endl;
	cout << "===========================" << endl;
    cout << "do-while 1-10:" << endl; // แสดงเลข 1-10 โดยใช้ลูป do-while
    i = 1;
    do { cout << i;
        if (i < 10) cout << " "; ++i;
    } while (i <= 10);
    cout << endl;
    cout << "===========================" << endl;
    return 1;
}