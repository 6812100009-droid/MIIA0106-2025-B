// TODO 1) เติม field และ method ใน class Student
 // TODO 2) เขียน swapStudent(Student&, Student&) 
// TODO 3) เขียน sortByID(Student[], size)

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string id;
    string nickname;
    string lineId;
    string phone;

    void input()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Nickname: ";
        cin >> nickname;
        cout << "Enter Lineid: ";
        cin >> lineId;
        cout << "Enter Phone: ";
        cin >> phone;
    }

    void print() const
    {
        cout << "ID: " << id << '\n';
        cout << "Nickname: " << nickname << '\n';
        cout << "Line ID: " << lineId << '\n';
        cout << "Phone: " << phone << '\n';
    }
};

void swapStudent(Student& a, Student& b)
{
    Student tmp = a;
    a = b;
    b = tmp;
}

void sortByID(Student students[], int size)
{
    // Bubble sort: ascending by id (lexicographic)
    for (int i = 0; i < size - 1; ++i)
    {
        bool swapped = false;
        for (int j = 0; j < size - 1 - i; ++j)
        {
            if (students[j].id > students[j + 1].id)
            {
                swapStudent(students[j], students[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) // already sorted
            break;
    }
}

void printStudents(Student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Student " << (i + 1) << ":\n";
        students[i].print();
        cout << "-----------------------\n";
    }
}

int main()
{
    const int SIZE = 5;
    Student students[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        students[i].input();
        cout << endl;
    }

    sortByID(students, SIZE);

    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}