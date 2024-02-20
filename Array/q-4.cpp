// perform sorting in 1D array , assending and descending both.

#include <iostream>
using namespace std;

int main()
{
    int size, sort;
    cout << "Enter the size of array : ";
    cin >> size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element [" << i << "] : ";
        cin >> a[i];
    }
    // assending order
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                sort = a[i];
                a[i] = a[j];
                a[j] = sort;
            }
        }
    }
    cout << "Sorted array in assending order " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    // descending order
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] < a[j])
            {
                sort = a[i];
                a[i] = a[j];
                a[j] = sort;
            }
        }
    }
    cout << "Sorted array in descending order " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
