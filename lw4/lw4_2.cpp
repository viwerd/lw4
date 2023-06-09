#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL , "ru");
    int arraY_lenght = 10;
    int arr[arraY_lenght];

    srand(time(0));

    for (int i = 0; i < arraY_lenght; i++)
    {
        arr[i] = rand() % 1000;
    }

    int sum = 0;
    int min = 999999;
    int max = 0;

    for (int i = 0; i < arraY_lenght; i++)
    {
        sum += arr[i];
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Сумма: " << sum << endl;
    cout << "Минимум: " << min << endl;
    cout << "Максимум: " << max << endl;

    return 0;
}
