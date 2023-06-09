#include <iostream>
#include <ctime>

using namespace std;

const int size_1 = 5;
const int size_2 = 7;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[size_1];
    int arr2[size_2];
    int merged[size_1 + size_2];

    srand(time(nullptr));
    for (int i = 0; i < size_1; i++) {
        arr1[i] = rand() % 10;
    }
    for (int i = 0; i < size_2; i++) {
        arr2[i] = rand() % 10;
    }

    for (int i = 0; i < size_1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size_2; i++) {
        merged[size_1 + i] = arr2[i];
    }

    cout << "Merged array: ";
    printArray(merged, size_1 + size_2);

    return 0;
}
