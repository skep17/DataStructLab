#include <iostream>
#include <string>
#include "time.h"

using namespace std;

int main()
{
    srand(time(0));
    int row;
    cout << "Enter number of rows: ";
    cin >> row;

    int **arr = new int *[row];
    int *colarr = new int[row];

    for (int i = 0; i < row; i++)
    {
        cout << "Enter size of column: ";
        cin >> colarr[i];
        arr[i] = new int[colarr[i]];
    }

    for (int j = 0; j < row; j++)
    {
        for (int k = 0; k < colarr[j]; k++)
        {
            arr[j][k] = rand() % 100 + 1;
        }
    }

    for (int j = 0; j < row; j++)
    {
        for (int k = 0; k < colarr[j]; k++)
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
    delete[] colarr;
}