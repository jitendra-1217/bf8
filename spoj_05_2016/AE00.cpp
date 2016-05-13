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
int main()
{
    // main()
    int n, s, i, nf;
    cin >> n;
    s = (int) sqrt(n);
    int a = 0;
    while (n)
    {
        nf = 1;
        s = (int) sqrt(n);
        for (i = 2; i <= s; ++i)
        {
            if (n%i == 0)
            {
                ++nf;
            }
        }
        a += nf;
        --n;
    }
    cout << a;
    return 0;
}
