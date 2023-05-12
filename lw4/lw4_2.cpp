#include <iostream>
#include <stdlib.h> // Для команд srand() и rand()
#include <time.h> // Для time()

using namespace std;

int main()
{
    setlocale(LC_ALL , "ru");
    int arraY_lenght = 10;
    int arr[arraY_lenght];

    srand(time(0));

    // Сначала генерируем 10 случайных чисел от 0 до 999
    for (int i = 0; i < arraY_lenght; i++)
    {
        arr[i] = rand() % 1000;
    }

    int sum = 0;
    int min = 999999;
    int max = 0;

    // С помощью цикла находим соответственно сумму, минунимум и максимум
    for (int i = 0; i < arraY_lenght; i++)
    {
        sum += arr[i];
        if (arr[i] < min) // Если min больше числа в массиве, то в min записываем это самое число
        {
            min = arr[i];
        }
        if (arr[i] > max) // Если max меньше числа в массиве, то в max записсываем это самое число
        {
            max = arr[i];
        }
    }

    cout << "Сумма: " << sum << endl;
    cout << "Минимум: " << min << endl;
    cout << "Максимум: " << max << endl;

    return 0;
}
