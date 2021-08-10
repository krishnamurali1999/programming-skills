#include<utility>
#include<iostream>

using namespace std;

int main() {
    pair<int, int> p1(10,20);
    pair<int, string> p2(11, "krishnamurali");
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    
    pair<int, int> p3;
    cout<<p3.first<<" "<<p3.second<<endl;
    p3 = {10,20};
    cout<<p3.first<<" "<<p3.second<<endl;
    p3 = make_pair(30,40);
    cout<<p3.first<<" "<<p3.second<<endl;
    
    cout<<(p1 == p3)<<" "
        <<(p1 != p3)<<" "
        <<(p1 < p3)<<" "
        <<(p1 > p3)<<endl;
    return 0;
}