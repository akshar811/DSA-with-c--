// perform index wise insertion in 1D array by taking user input of index and value both

#include <iostream>
using namespace std;

int main()
{
    int size, index, value, i , j;

    cout << "Enter the size of the array: ";
    cin >> size;

    int a[size];

    cout << "Enter the elements of the array: ";
    for (i = 0; i < size; i++)
    {
        cout << "Enter element [" << i << "] : ";
        cin >> a[i];
    }

    cout << "Enter the index: ";
    cin >> index;

    cout << "Enter the value : ";
    cin >> value;

    for (i = size; i > index; i--)
    {
        a[i] = a[i - 1];
    }

    a[index] = value;
    size++;

    cout << "Array after insertion: ";
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
    
}

