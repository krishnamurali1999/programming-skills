#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char s1[] = "gfg";
    char s2[] = {'c', 'p', 'p', '\0'};
    cout<<strlen(s1)<<endl;
    cout<<strlen(s2)<<endl;

    char s3[] = "abcd";
    int res = strcmp(s1, s3);
    if(res == 0) {
        cout<<"same"<<endl;
    } else if(res < 0) {
        cout<<"small is s1"<<endl;
    } else {
        cout<<"small is s2"<<endl;
    }

    char str[5];
    strcpy(str, "gfg");
    cout<<str<<endl;

    return 0;
}