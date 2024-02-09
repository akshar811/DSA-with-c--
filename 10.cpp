#include <iostream>
using namespace std;

int main()
{
    int st , en;
    cout << "Enter strating number : " ;
    cin >> st ;
    cout << "Enter ending number : "  ;
    cin >> en ;

    while (st <= en)
    {
        cout << st << endl;
        st++;
    }

    return 0;
}