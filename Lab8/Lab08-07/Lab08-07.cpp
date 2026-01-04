#include <iostream>
#include <string>
using namespace std;

struct Phone {
    string mobile;
    string home;
};

struct Parent {
    string name;
    string relationship;
    Phone contact; 
};
struct Student {
    string id;
    string nickname;
    string lineID;
    Phone myContact;
    Parent myParent;
};

int main() {
    Student s1;
    cout << "Enter Student Information\n";
    cout << "-------------------------\n";
    cout << "ID : "; cin >> s1.id;
    cout << "Nickname : "; cin >> s1.nickname;
    cout << "LineID : "; cin >> s1.lineID;

    s1.myContact.mobile = "089696969";
    s1.myContact.home = "029999969";
    s1.myParent.name = "Sutit";
    s1.myParent.relationship = "Father";
    s1.myParent.contact.mobile = "099696969";
    s1.myParent.contact.home = "029999969";

    cout << "\n======= Output =======\n";
    cout << "Student Data" << endl;
    cout << "------------\n";
    cout << "ID : " << s1.id << endl;
    cout << "Nickname : " << s1.nickname << endl;
    cout << "Line ID : " << s1.lineID << endl;
    cout << "Mobile : " << s1.myContact.mobile << endl;
    cout << "Home : " << s1.myContact.home << endl;
    cout << "Parent Data" << endl;
    cout << "-----------\n";
    cout << "Name: " << s1.myParent.name << endl;
    cout << "Relationship : " << s1.myParent.relationship << endl;
    cout << "Parent Mobile : " << s1.myParent.contact.mobile << endl;
    cout << "Parent Home : " << s1.myParent.contact.home << endl;

    return 0;
}