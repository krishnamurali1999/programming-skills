#include <iostream>
using namespace std;
int main()
{
    int op, x1, x2;
    cin >> op >> x1 >> x2;
    switch (op)
    {
    case 1:
        cout << x1 + x2 << endl;
        break;
    case 2:
        cout << x1 - x2 << endl;
        break;
    case 3:
        cout << x1 * x2 << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
    }
    return 0;
}