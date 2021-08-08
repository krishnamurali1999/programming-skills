#include<iostream>
using namespace std;

void f1(int x) {
    return;
}

void f1(int *ptr) {
    return;
}

int main() {
    int x = NULL;
    
    // int y = nullptr; -> Not allowed   
    // f1(NULL); -> ambigious
    
    return 0;
}