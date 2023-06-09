#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int rows = 3;
const int cols = 4;

int main()
{
    int matrix[rows][cols];
    srand(time(nullptr));
    int sum = 0;
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    cout << "Matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 100;
            cout << matrix[i][j] << "\t";
            sum += matrix[i][j];
            if (matrix[i][j] < minVal)
            {
                minVal = matrix[i][j];
            }
            if (matrix[i][j] > maxVal)
            {
                maxVal = matrix[i][j];
            }
        }
        cout << endl;
    }

    cout << "Sum: " << sum << endl;
    cout << "Min value: " << minVal << endl;
    cout << "Max value: " << maxVal << endl;

    return 0;
}
