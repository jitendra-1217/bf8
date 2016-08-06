// Includes
#include <cstdio>
// #include <iostream>
// #include <algorithm>
// #include <deque>
// #include <fstream>
// #include <iterator>
// #include <list>
// #include <map>
// #include <queue>
// #include <set>
// #include <stack>
// #include <string>
// #include <utility>
// #include <vector>
// #include <cmath>
// Defines
#define uli unsigned long long int
#define li  long int
// Namespaces
using namespace std;
// Prototypes

uli gcd(uli x, uli y) {

    uli k;
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
/**
 * [main description]
 * @return [description]
 */
int main()
{
    while (1) {
        uli n, k, i, j, p;
        scanf("%llu%llu", &n, &k);
        if (n == -1 && k == -1) break;
        p = 0;

        // Convert following to formulla
        for (i = 1; i < n; ++i) {
            j = k - i;
            if (j < i + 1) {
                break;
            }
            if (j >= n) {
                p += (n - i);
            } else {
                p += (j - i);
            }
        }

        

        i = (n*(n-1))/2;
        if (p == 0) {
            printf("0\n");
        } else if (p == i) {
            printf("1\n");
        } else {
            j = gcd(p, i);
            printf("%llu/%llu\n", p/j, i/j);
        }
    }
    return 0;
}
