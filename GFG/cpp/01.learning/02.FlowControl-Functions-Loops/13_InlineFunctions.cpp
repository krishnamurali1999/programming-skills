#include <iostream>
using namespace std;

#define add(x, y) x + y

inline int getMax(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout<<add(10,20)<<endl;
    
    int a = 10, b = 20;
    cout << getMax(a, b) << endl;
    return 0;
}