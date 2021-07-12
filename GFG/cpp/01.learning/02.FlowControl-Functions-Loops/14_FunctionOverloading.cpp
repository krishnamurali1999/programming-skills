#include <iostream>
using namespace std;

int myMax(int x, int y)
{
    return (x > y) ? x : y;
}

int myMax(int x, int y, int z)
{
    return myMax(myMax(x, y), z);
}

void print(string s)
{
    cout << s << endl;
}

void print(int s)
{
    cout << s << endl;
}

void print(char s)
{
    cout << s << endl;
}

int main()
{
    int a = 10, b = 20, c = 30;
    cout << myMax(a, b) << endl;
    cout << myMax(a, b, c) << endl;

    print(1);
    print("gfg");
    print('a');
}