// Includes
#include <iostream>
#include <cstdio>
// Namespaces
using namespace std;
// Prototypes
// Main
int GetSumOfSquaresOfDigits(long long int n)
{
    int ans = 0;
    int t;
    while (n)
    {
        t = n%10;
        ans += t*t;
        n /= 10;
    }
    return ans;
}

int main()
{
    long long int n;
    int m[1000] = {0};
    int t;
    int found = 1;
    int c = 0;
    cin >> n;
    while (1)
    {
        t = GetSumOfSquaresOfDigits(n);
        if (m[t] == 0)
        {
            m[t] = 1;
            ++c;
            n = t;
        }
        else
        {
            found = 0;
            break;
        }
        if (t == 1)
            break;
    }

    if (found)
        cout << c << endl;
    else
        cout << "-1" << endl;
    return 0;
}
