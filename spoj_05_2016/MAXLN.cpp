// Includes
#include <iostream>
#include <cmath>
#include <cstring>
#define KMAX 5001
// Namespaces
using namespace std;
// Prototypes
// Main
int main()
{
    int t, i;
    long long int r;
    cin >> t;
    i = 0;
    while (i < t)
    {
        ++i;
        scanf("%lld", &r);
        printf("Case %d: %0.2f\n", i, 0.25 + 4*r*r);
    }
    return 0;
}
