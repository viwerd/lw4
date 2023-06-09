#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int arraY_length = 10;
    int arr[arraY_length]; 

    srand(time(0));

    for (int i = 0; i < arraY_length; i++)
    {
        arr[i] = rand();
    }

    for (int i = 0; i < arraY_length; i++)
    {
        cout << arr[i] << " " << endl;
    }

    return 0;
}
