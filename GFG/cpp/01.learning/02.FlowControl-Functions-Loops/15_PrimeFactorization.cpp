#include <iostream>

using namespace std;

int check_prime(int n)
{
    if (n == 0 || n == 1)
    {
        return -1;
    }
    else if (n == 2 || n == 3)
    {
        return n;
    }
    else if (n % 2 == 0 || n % 3 == 0)
    {
        return -1;
    }
    else
    {
        for (int i = 5; i * i <= n; i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                return -1;
            }
        }
        return n;
    }
}

void prime_factors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int j = check_prime(i);
        if (j != -1)
        {
            int x = j;
            while (n % x == 0)
            {
                cout << j << " ";
                x = x * i;
            }
        }
    }
    cout<<endl;
}

int main()
{
    int n;
    cin >> n;
    prime_factors(n);
}