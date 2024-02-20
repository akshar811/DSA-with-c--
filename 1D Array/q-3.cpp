// find max from 1D array

#include <iostream>
using namespace std;

int main()
{
    int size, max;
    cout << "Enter the size of array : ";
    cin >> size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element [" << i << "] : ";
        cin >> a[i];
    }

    max = a[0];

    for (int i = 1; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    cout << "Maximum element in the array: " << max << endl;

    return 0;
}
