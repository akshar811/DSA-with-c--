// perform rotation in 1D array from the any index from user.

#include <iostream>
using namespace std;

int main()
{
    int size, index;

    cout << "Enter the size of the array: ";
    cin >> size;

    int a[size];
    cout << "Enter the elements of the array: ";

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element [" << i << "] : ";
        cin >> a[i];
    }

    cout << "Enter the index to rotate from: ";
    cin >> index;

    int temp[size];

    for (int i = 0; i < size; i++)
    {
        temp[i] = a[(i + index) % size];
    }

    for (int i = 0; i < size; i++)
    {
        a[i] = temp[i];
    }

    cout << "Rotated array: ";

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
    
}