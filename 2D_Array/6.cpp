//  Print row-wise & column-wise sum.

#include <iostream>
using namespace std;

int main()
{
    int r, c, i, j, row_sum = 0, col_sum = 0;

    cout << "Enter the row : ";
    cin >> r;

    cout << "Enter the column : ";
    cin >> c;

    int a[r][c], choice;

    cout << "Enter Array elements : ";

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter a [" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
    }

    do
    {
        cout << "Press 1 for Row-wise sum : " << endl;
        cout << "Press 2 for Column-wise sum : " << endl;
        cout << "Press 0 for exit : " << endl;

        cout << "Enter Your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int row_index;
            cout << "Enter Row index : ";
            cin >> row_index;

            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    if (i == row_index)
                    {
                        row_sum = row_sum + a[i][j];
                    }
                }
            }
            cout << "Row-wise sum is " << row_sum << endl;
            break;

        case 2:
            int col_index;
            cout << "Enter Column index : ";
            cin >> col_index;

            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    if (i == col_index)
                    {
                        col_sum = col_sum + a[i][j];
                    }
                }
            }
            cout << "Column-wise sum is " << col_sum << endl;
            break;

        case 0:
            break;

        default:
            cout << "Enter valid choice......" << endl;
            break;
        }

    } while (choice != 0);

    return 0;
}