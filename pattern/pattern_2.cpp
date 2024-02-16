#include <iostream>
using namespace std;

int main()
{
    /* 1
       1 2
       1 2 3
       1 2 3 4
       1 2 3 4 5
      To solve a pattern for outer loop
    */

    int i, num = 0;
    for (i = 1; i <= 5; i++)

    {
        num = num * 10 + i ;
        cout << num  << endl  ;
    }

    return 0;
}