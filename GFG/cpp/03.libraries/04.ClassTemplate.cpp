#include<iostream>
using namespace std;

template<typename T>
struct Pair {
    T x, y;
    Pair(T i, T j) {
        x=i; y=j;
    }
    T getFirst()  {return x;}
    T getSecond() {return y;}
};

/* CAN BE USED FOR CLASSES ONLY
template<typename T>
Pair<T>::getThird() {
    return -1;
}
*/

int main() {
    Pair<int> p1(10,20), p2(30,40);
    cout<<p1.getFirst()<<" "<<p1.getSecond()<<endl;
    cout<<p2.getFirst()<<" "<<p2.getSecond()<<endl;
    return 0;
}