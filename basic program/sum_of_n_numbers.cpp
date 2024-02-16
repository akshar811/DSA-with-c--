#include <iostream>
using namespace std;

int main()
{
    int i, n, sum;
    sum = 0;

    cout << "Enter any Number : ";
    cin >> n;

    i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << "Sume is : " << sum << endl;

    return 0;
}