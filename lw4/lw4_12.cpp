#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 4;
const int COLS = 4;

int main()
{
    int arr[ROWS][COLS];
    srand(time(NULL));

    cout << "Array:" << endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Elements on diagonal:" << endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (i == j)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}
