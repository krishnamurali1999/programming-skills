#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_front(5);
    for(int x:l) {
        cout<<x<<" ";
    }
    cout<<endl;

    l.assign({10,2,5,20});
    l.pop_front();
    l.pop_back();
    for(int x:l) {
        cout<<x<<" ";
    }
    cout<<endl;

    l.assign({10,20,30});
    auto it = l.begin();
    it++;
    it = l.insert(it, 99);
    l.insert(it, 2, 7);
    cout<<l.front()<<" "<<l.back()<<endl;
    cout<<l.size()<<endl;
    cout<<*it<<endl;
    for(int x:l) {
        cout<<x<<" ";
    }
    cout<<endl;

    l.assign({10,20,30,40,20,40});
    it = l.begin();

    it = l.erase(it);
    l.remove(40);
    for(int x:l) {
        cout<<x<<" ";
    }
    cout<<endl;
    
    l.assign({10,15,15,20,20,10});
    l.unique();
    l.sort();
    l.reverse();
    for(int x:l) {
        cout<<x<<" ";
    }
    cout<<endl;
    



    return 0;
}
/*
merge()

*/