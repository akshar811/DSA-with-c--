// find average of all elements of 1d array.

#include <iostream>
using namespace std;

int main()
{
  int n, i, sum;
  sum = 0;

  cout << "Enter array size : ";
  cin >> n;

  int a[n];

  for (i = 0; i < n; i++)
  {
    cout << "Enter a [" << i << "] : ";
    cin >> a[i];
  }

  for (i = 0; i < n; i++)
  {
    sum = sum + a[i];
  }
  cout << " Average is : " << sum / n << endl;

  return 0;
}
