// Includes
// #include <iostream>
#include <cmath>
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
    long long int t, a, b, gcd_ab, gcd_ab_2, ans, i;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld %lld", &a, &b);
        gcd_ab = gcd(a, b);
        gcd_ab_2 = sqrt(gcd_ab);
        ans = 1;
        for (i = 2; i <= gcd_ab_2; ++i)
        {
            if (gcd_ab % i == 0)    ++ans;
        }
        ans *= 2;
        if (gcd_ab_2 * gcd_ab_2 == gcd_ab) {
            --ans;
        }
        printf("%lld\n", ans);
    }
    return 0;
}
