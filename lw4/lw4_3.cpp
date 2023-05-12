#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int array_lenght = 10;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
	setlocale(LC_ALL , "ru");
    int arr[array_lenght];

    srand(time(NULL));

    for (int i = 0; i < array_lenght; i++)
    {
        arr[i] = rand() % 100;
    }

    cout << "Original array:" << endl;
    printArray(arr, array_lenght);
    bubbleSort(arr, array_lenght);

    cout << "Sorted array:" << endl;
    printArray(arr, array_lenght);

    return 0;
}
