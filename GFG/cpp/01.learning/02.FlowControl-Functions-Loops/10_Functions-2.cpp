#include <iostream>
using namespace std;

int getMax(int, int);

void func2()
{
    cout << "Inside func2()" << endl;
}

void func1()
{
    cout << "In func1: Before func2()" << endl;
    cout << "In func1: After func2()" << endl;
    func2();
}

int main()
{
    cout << "In main: Before func1()" << endl;
    func1();
    cout << "In main: After func1()" << endl;
    
    int a=10,b=20;
    cout<<getMax(a,b)<<endl;
    return 0;
}

int getMax(int a, int b) {
    if (a > b) {
        cout<<a<<endl;
    } else {
        cout<<b<<endl;
    }
}