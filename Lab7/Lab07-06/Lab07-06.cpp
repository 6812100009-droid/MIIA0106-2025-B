#include <iostream>
using namespace std;

void printArray(int* p, int size) {
    if (p == nullptr || size <= 0) return;
    for (int i = 0; i < size; ++i) {
        cout << p[i];
        if (i + 1 < size) cout << ' ';
    }
}

void swapValue(int* a, int* b) {
    if (a == nullptr || b == nullptr) return;
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortDescending(int* p, int size) {
    if (p == nullptr || size <= 1) return;
    // Selection sort: place largest remaining element at position i
    for (int i = 0; i < size - 1; ++i) {
        int maxIdx = i;
        for (int j = i + 1; j < size; ++j) {
            if (p[j] > p[maxIdx]) maxIdx = j;
        }
        if (maxIdx != i) swapValue(&p[i], &p[maxIdx]);
    }
}

int main() {
    int arr[] = { 5, 2, 9, 1, 3 };
    int size = 5;

    cout << "Before : " ;
    printArray(arr, size) ;
    cout << endl;
    cout << "After : ";
    sortDescending(arr, size);
    printArray(arr, size);
    cout << endl;
    return 0;
}