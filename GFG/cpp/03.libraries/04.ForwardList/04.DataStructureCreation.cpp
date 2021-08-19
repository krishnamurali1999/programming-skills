#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

list<int> l;
void insert(int x) {
    l.push_back(x);
}

void print() {
    for(auto i : l) {
        cout<<i<<" ";
    }
    cout<<endl;
}

void replace(int x, list<int> &seq) {
    auto it = find(l.begin(), l.end(),x);
    if(it == l.end()) {
        return;
    }
    it = l.erase(it);
    l.insert(it, seq.begin(), seq.end());
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    
    print();
    
    list<int> seq = {98,99,100,101,102};
    replace(20, seq);
    print();
    
    return 0;
}