// Includes
#include <iostream>
#include <cstdio>
// Namespaces
using namespace std;
// Prototypes

// Main
/**
 * [main description]
 * @return [description]
*/
int main()
{
    long long int n, x, ans;
    scanf("%lld", &n);
    while (n--)
    {
        scanf("%lld", &x);
        ans ^= x;
    }
    printf("%lld", ans);
    return 0;
}
