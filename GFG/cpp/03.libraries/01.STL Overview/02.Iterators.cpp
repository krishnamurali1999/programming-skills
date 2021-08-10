/*
    INPUT                   OUTPUT
                Forward
             BiDirectional
                Random
*/


#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> v = {10,20,30,40,50};
    vector<int>::iterator i = v.begin(); // auto i
    cout<<(*i)<<" ";
    i++;
    cout<<(*i)<<" ";
    i = v.end();
    i--; 
    cout<<(*i)<<" "<<endl;

    i = v.begin(); 
    cout<<(*i)<<" ";
    
    i = next(i);
    cout<<(*i)<<" ";
    
    i = next(i, 2);
    cout<<(*i)<<" ";
    
    i = prev(i);
    cout<<(*i)<<" "<<endl;
    
    i = v.begin();
    advance(i, 3);
    cout<<(*i)<<" "<<endl;
    


    return 0;
}