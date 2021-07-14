#include <iostream>
using namespace std;
int main()
{
    /*
    [******]
    */
    int i = 0;
    while (i < 5)
    {
        cout << "*";
        i++;
    }
    cout << endl;

    /*
    
    [*
     *
     * 
     * 
     *]
    
    */
    i = 0;
    while (i < 5)
    {
        cout << "*" << endl;
        i++;
    }

    /*
    
    *****
    *****
    *****
    *****
    *****
        
    */
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}