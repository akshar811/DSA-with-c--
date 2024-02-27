// To check whether any number is palindrom or not.

#include <iostream>
using namespace std;

int rev(int n, int p)
{
    if (n == 0)
        return p;

    p = (p * 10) + (n % 10);

    return rev(n / 10, p);
}

int main()
{

    int num;
    cout << "Enter a Number : ";
    cin >> num;

    int reversed = rev(num, 0);

      cout << "Reversed number: " << reversed << endl;

    if (reversed == num)
    {
        cout << num << " is a palindrome." << endl;
    }
    else
    {
        cout << num << " is not a palindrome." << endl;
    }
    return 0;
}
