#include <iostream>
using namespace std;
int main()
{

	for (int i = 0; i < 3; i++)
	{
		cout << "GFG" << endl;
	}

	for (int i = 0; i < 5; i++)
		;
	cout << "GFG" << endl;


	int j=3;
	do {
		cout<<"GFG"<<endl;
	} while(j<3);

	int k=0;
	while(k<5) {
		cout<<"GFG"<<endl;
		k++;
	}

	int l = 0;
	while(l<5);
	{
		cout<<"GFG"<<endl;
		l++;
	}
	return 0;
}
