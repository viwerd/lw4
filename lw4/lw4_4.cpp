#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int arr_lenght = 10;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double calculateAverage(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (double)sum / size;
}

int main()
{
    int arr[arr_lenght];

    // Заполнение массива случайными числами
    srand(time(0));

    for (int i = 0; i < arr_lenght; i++)
    {
        arr[i] = rand() % 100;
    }

    cout << "Массив:" << endl;
    printArray(arr, arr_lenght);

    double average = calculateAverage(arr, arraY);
    cout << "Среднее значение: " << average << endl;

    return 0;
}
