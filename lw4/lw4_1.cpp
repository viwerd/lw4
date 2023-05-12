#include <iostream>
#include <stdlib.h> // ��� ������ srand() � rand()
#include <time.h> // ��� time()

// ���� ���������� ������: https://www.bestprog.net/ru/2020/08/13/�-generating-random-numbers-functions-rand-srand-time-examples-ru/#q01

using namespace std;

int main()
{
    int arraY_length = 10; // ���-�� ��������� �������
    int arr[arraY_length]; // ������

    srand(time(0)); // ���������� ������ srand() � time() ���������

    for (int i = 0; i < arraY_length; i++) // ���� i < ���-�� ��������� �������, �� � i + 1
    {
        arr[i] = rand();
    }

    for (int i = 0; i < arraY_length; i++)
    {
        cout << arr[i] << " " << endl;
    }

    return 0;
}

// rand() - ������������� ��������� �����
// srand() - ��������� ��������� �����, �� ������� ���������� ������������� ��������� �����
// time() - ������� ����� ����������� � 1 ������ 1970 �.
