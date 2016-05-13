// Includes
#include <iostream>
#include <cmath>
// Namespaces
using namespace std;
// Prototypes

// Main
/**
 * [main description]
 * @return [description]
*/
long long int c[1000000000];

long long int Follow(long long int n)
{
    // long long int t;
    if (c[n] == -1)
    {
        c[n] = Follow(n/4) + Follow(n/3) + Follow(n/2);
    }
    if (c[n] < n)
    {
        c[n] = n;
    }

    // cout << "-->DEBUG n: " << n << ", c[n]: " << c[n] << endl;

    return c[n];
}

int main()
{
    // main()
    // int t;
    long long int n;
    for (n = 0; n < 1000000000; ++n)
    {
        c[n] = -1;
    }
    c[0] = 0;
    c[1] = 1;

    // cin >> t;
    // while (t--)
    // {
        cin >> n;
        cout << Follow(n) << endl;
    // }
    return 0;
}
