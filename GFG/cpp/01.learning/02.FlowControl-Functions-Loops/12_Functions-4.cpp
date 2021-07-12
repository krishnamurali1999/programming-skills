// Default arguments

/*
1. All default args should be at the end
2. Default args can be provided either in declaration or definition but not both
*/

#include <iostream>
using namespace std;

void printDetails(int id, string name = "NA", string address = "NA")
{
    cout << id << " " << name << " " << address << endl;
}

int main()
{
    printDetails(101, "murali", "Telvad");
    cout << endl;
    printDetails(102, "KMurali");
    cout << endl;
    printDetails(103);
    cout << endl;
}