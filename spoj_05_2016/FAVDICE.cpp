// Includes
#include <iostream>
#include <cstdio>
#include <cmath>
// Namespaces
using namespace std;
// Prototypes
// Main
int main()
{
    int t;
    double n, temp, ans;
    cin >> t;
    while (t--)
    {
        cin >> n;
        temp = n;
        ans = 1;
        while (n-- > 1) {
            ans += double(temp*1/n);
        }
        printf("%.2f\n", ans);
    }
    return 0;
}
