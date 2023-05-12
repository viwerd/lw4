#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 3;
const int COLS = 4;

int main()
{
    setlocale(LC_ALL,"RUS");
    int i , j , arr[ROWS][COLS];
    srand(time(NULL));  // ������������� ���������� ��������� �����

    // ���������� ������� ���������� �������
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    // ����� ������� �� �����
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // ���������� ����� ��������� � ������ ������
    for (i = 0; i < ROWS; i++)
    {
        int sum = 0;
        for (j = 0; j < COLS; j++)
        {
            sum += arr[i][j];
        }
        cout << "����� ��������� � ������ " << i << ": " << sum << endl;
    }

    return 0;
}
