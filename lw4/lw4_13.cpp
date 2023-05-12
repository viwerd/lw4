#include <iostream>
#include <climits>

using namespace std;

const int ROWS = 3;
const int COLS = 4;

int main()
{
    int arr[ROWS][COLS] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // ����� ������������ ������� � ������ �������
    int maxs[COLS];
    for (int j = 0; j < COLS; j++)
    {
        int max_val = INT_MIN;
        for (int i = 0; i < ROWS; i++)
        {
            if (arr[i][j] > max_val)
            {
                max_val = arr[i][j];
            }
        }
        maxs[j] = max_val;
    }

    // ������� ������������ ������� � ������ �������
    cout << "������������ �������� � ������ �������:\n";
    for (int j = 0; j < COLS; j++) {
        cout << "������� " << j << ": " << maxs[j] << endl;
    }

    return 0;
}
