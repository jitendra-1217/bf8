// Includes
#include <iostream>
#include <cstdio>
// Namespaces
using namespace std;
// Prototypes
long long int gcd(long long int x, long long int y) {

    long long int k;
    if (x < y) {
        k = x;
        x = y;
        y = k;
    }
    while (y) {
        k = x%y;
        x = y;
        y = k;
    }
    return x;
}

// Main
int main()
{
    int t;
    long long int a, b, gcd_ab;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        gcd_ab = gcd(a, b);
        cout << b/gcd_ab << " " << a/gcd_ab << endl;
    }
    return 0;
}
