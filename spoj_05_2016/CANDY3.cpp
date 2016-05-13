// Includes
#include <iostream>
#include <algorithm>
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
    long long int t, n, n2, n3, s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        n2 = n;
        s = 0;
        while (n2--)
        {
            cin >> n3;
            s += n3%n;
        }
        cout << (s%n == 0 ? "YES" : "NO");
        cout << endl;

        // cout << t << endl;
    }
    return 0;
}
