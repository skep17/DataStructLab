#include <iostream>
#include <string>
#include "time.h"

using namespace std;

int main()
{
    srand(time(0));
    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;

    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        cout << "Enter size of column: ";
        cin >> col;
        arr[i] = new int[col + 1];
        arr[i][0] = col;
    }

    for (int j = 0; j < row; j++)
    {
        for (int k = 1; k <= arr[j][0]; k++)
        {
            arr[j][k] = rand() % 100 + 1;
        }
    }

    for (int j = 0; j < row; j++)
    {
        for (int k = 1; k <= arr[j][0]; k++)
        {
            cout << arr[j][k] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}