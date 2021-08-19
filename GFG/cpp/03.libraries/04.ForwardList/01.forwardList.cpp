#include<iostream>
#include<forward_list>
using namespace std;
int main() {
    forward_list<int> l = {10,20,30};
    l.push_front(5);
    l.push_front(3);
    l.pop_front();
    for(int x:l) {
        cout<<x<<" ";
    }
    cout<<endl;

    l.assign({10,20,30,40,50});
    l.remove(10);
    for(auto it = l.begin(); it != l.end();it++) {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    forward_list<int> l_copy;
    l_copy.assign(l.begin(), l.end());
    for(int x : l_copy) {
        cout<<x<<" ";
    }
    cout<<endl;

    l_copy.assign(5, 10);
    for(int x : l_copy) {
        cout<<x<<" ";
    }
    cout<<endl;


    l.assign({15, 20, 30});
    auto it = l.insert_after(l.begin(), 10);
    it = l.insert_after(it, {2,3,5});
    it = l.emplace_after(it, 40);
    it = l.erase_after(it);
    for(int x : l) {
        cout<<x<<" ";
    }
    cout<<endl;

    it = l.erase_after(it, l.end());
    for(int x : l) {
        cout<<x<<" ";
    }
    cout<<endl;

    forward_list<int> l1 = {10,20,30};
    forward_list<int> l2 = {5,15};
    l1.merge(l2);
    for(int x:l1) {
        cout<<x<<" ";
    }
    cout<<endl;


    



    return 0;
}

/*
clear()
empty()
reverse()
merge()
sort()
*/