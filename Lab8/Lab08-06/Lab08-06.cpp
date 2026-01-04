#include <iostream>
#include <string>
using namespace std;

struct Student {
    //TODO 1) เติม field ใน struct Student ให้ครบ: studentID, nickname
    string IDStudent;
    string nickname;
};

int main() {
    Student s1;
    Student* p = nullptr;

    // TODO 2) ใช้ pointer p ชี้ไปที่ s1
        // TODO: p = &s1;
	p = &s1;

    // TODO 3) กำหนดค่าโดยใช้ p->
        // TODO: p->IDStudent = ...
        // TODO: p->nickname = ...
	p->IDStudent = "6812100009";
	p->nickname = "Thanat.K";

	//(*p).id = "65050123"; // ตัวอย่างการใช้ (*p).field
	//(*(p)).nickname = "JohnDoe";   

    // TODO 4) แสดงผลโดยใช้ p->
    cout << "IDStudent: " << p->IDStudent << endl;
    cout << "Nickname: " << p->nickname << endl;

    return 0;
}
