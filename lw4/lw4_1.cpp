#include <iostream>
#include <stdlib.h> // Для команд srand() и rand()
#include <time.h> // Для time()

// Брал информацию отсюда: https://www.bestprog.net/ru/2020/08/13/с-generating-random-numbers-functions-rand-srand-time-examples-ru/#q01

using namespace std;

int main()
{
    int arraY_length = 10; // Кол-во элементов массива
    int arr[arraY_length]; // Массив

    srand(time(0)); // комбинация команд srand() и time() позволяет

    for (int i = 0; i < arraY_length; i++) // Пока i < кол-ва элементов массива, то к i + 1
    {
        arr[i] = rand();
    }

    for (int i = 0; i < arraY_length; i++)
    {
        cout << arr[i] << " " << endl;
    }

    return 0;
}

// rand() - сгенерировать случайное число
// srand() - установка начальной точки, из которой происходит генерирование случайных чисел
// time() - выведет число миллисекунд с 1 января 1970 г.
