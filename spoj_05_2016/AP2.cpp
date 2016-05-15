// Includes
#include <iostream>
// #include <algorithm>

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
    long long int t, x, y, z, a, d, n;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> z;

        n = (2*z)/(x + y);
        d = (y - x)/(n - 5);
        a = x - 2*d;

        // cout << a << endl;
        // cout << d << endl;
        cout << n << endl;
        while(n--)
        {
            cout << a << " ";
            a += d;
        }
        cout << endl;
    }
    return 0;
}
