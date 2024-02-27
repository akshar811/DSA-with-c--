// print all prime numbers between 1 to 50 using recursion in c++

#include <iostream>
using namespace std;

int Prime(int i, int num)
{
    if (num == i)
        return 0;
    else if (num % i == 0)
        return 1;
    else
    {
        return Prime(i + 1, num);
    }
}

void Primes(int n)
{
    if (n <= 1)
        return;
    Primes(n - 1);
    if (Prime(2, n) == 0)
        cout << n << " ";
}

int main()
{
    cout << "Prime Numbers Between 1 to 50 are: ";
    Primes(50);

    return 0;
}
