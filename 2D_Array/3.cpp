//  perform addition of two 2D Arrays and store into another array .

#include <iostream>
using namespace std;

int main()
{

    int r, c, i, j;

    cout << "Enter row size : ";
    cin >> r;

    cout << "Enter column size : ";
    cin >> c;

    int a[r][c], b[r][c], C[r][c];

    cout << "Enter array a : " << endl;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter a [" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
    }

    cout << "Enter array b : " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter b [" << i << "][" << j << "] : ";
            cin >> b[i][j];
        }
    }

    cout << endl
         << "===============================" << endl;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            C[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << " Array c: " << endl;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}