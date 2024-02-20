// WAP to find value from array which equals to the addtion of user input.

#include <iostream>
using namespace std;

int main()
{
    int a[8] = {2, 3, 5, 7, 11, 13, 17, 19};
    int i, j, n;
    bool val = false;

    cout << "Enter a number: "; 
    cin >> n;

    for (i = 0; i < a[i]; i++)
    {
        for (j = i + 1; j < a[j]; j++)
        {
            if (a[i] + a[j] == n)
            {
                cout << "Values found: " << a[i] << " and " << a[j] << endl;
                val = true;
            }
        }
    }

    if (!val)
    {
        cout << "No two elements add up to the given number." << endl;
    }

    return 0;
}
