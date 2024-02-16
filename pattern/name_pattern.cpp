#include <iostream>
using namespace std;



int main()
{
    int i, j;

    for (i = 1; i <= 7; i++)
    {
        // print A
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || j == 5 || i == 4 || i == 1)
            {
                cout << "* ";
            //    system("Color 0B"); 
            }
            else
            {
                cout << "  ";
            }
        }
      cout << "  ";
      
        // print K
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || j + 2 == i || (i + j == 6 && i <= 4))
            {
                cout << "* ";
                
            }
            else
            {
                cout << "  ";
            }
        }
         cout << "  ";

        // print S
        for (j = 1; j <= 5; j++)
        {
            if ((i == 1 || i == 4 || i == 7) || (j == 1 && (i == 2 || i == 3)) || (j == 5 && (i == 5 || i == 6)))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
         cout << "  ";

        // print H
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || j == 5 || i == 4)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
         cout << "  ";

         // print A
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || j == 5 || i == 4 || i == 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
         cout << "  ";

         // print R
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || i==1 || j + 2 == i || (j == 5 && i <= 3) || (i == 4 && j != 5))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
        
    }
    return 0;
}
