#include <iostream>
#include <string>
#include "time.h"

using namespace std;

int main()
{
    srand(time(0));
    int col = 10, row;
    cout << "Enter number of rows: ";
    cin >> row;

    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    for (int j = 0; j < row; j++)
    {
        for (int k = 0; k < col; k++)
        {
            arr[j][k] = rand() % 100 + 1;
        }
    }

    for (int j = 0; j < row; j++)
    {
        for (int k = 0; k < col; k++)
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