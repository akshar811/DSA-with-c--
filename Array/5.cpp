// create a menu-driven program to perform CRUD operations on given 1D array.

#include <iostream>
using namespace std;

int main()
{
    int size, pos, elem, choice;

    cout << "Enter array size : ";
    cin >> size;

    int a[size];

    cout << "Enter array elements : ";

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a [" << i << "] : ";
        cin >> a[i];
    }

    cout << endl
         << endl
         << "============================================" << endl
         << endl;

    do
    {
        cout << " Press 1 for insert an element : " << endl;
        cout << " Press 2 for update an element : " << endl;
        cout << " Press 3 for delete an element : " << endl;
        cout << " Press 4 for view all elements :" << endl;
        cout << " Press 0 for exit :" << endl;

        cout << " Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter position : ";
            cin >> pos;

            cout << "Enter element : ";
            cin >> elem;

            for (int i = size - 1; i >= pos; i--)
            {
                a[i + 1] = a[i];
            }
            size++;
            a[pos] = elem;

            cout << "Element create successfully : ";
            cout << endl;

            break;
        case 2:
            cout << "Enter position : ";
            cin >> pos;

            cout << "Enter new element : ";
            cin >> elem;

            a[pos] = elem;

            cout << "Element updated successfully : " << endl;

            break;
        case 3:

            cout << "Enter position : ";
            cin >> pos;

            for (int i = pos + 1; i < size; i++)
            {
                a[i - 1] = a[i];
            }
            size--;
            cout << "Element Deleted successfully : " << endl;

            break;
        case 4:
            cout << endl
                 << "Array is : ";

            for (int i = 0; i < size; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            break;
        case 0:
            break;

        default:
            cout << "Enter valid choice....." << endl;
            break;
        }

    } while (choice != 0);

    return 0;
}
