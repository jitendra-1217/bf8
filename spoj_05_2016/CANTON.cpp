// Includes
#include <iostream>
#include <cmath>
#include <cfloat>
#include <cstring>
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
    int t;
    unsigned long long int c, n, r;
    bool b;
    double n2;
    cin >> t;
    while (t--)
    {
        cin >> c;
        n2 = (-1 + sqrt(1 + 8*c))/2;
        n = floor(n2);
        b = (n2 - n) < FLT_EPSILON;
        if (!b)
            ++n;
        r = c - (n*(n-1))/2;

        // cout << "n = " << n << endl;
        // cout << "b = " << (b ? "TRUE" : "FALSE") << endl;
        // cout << "r = " << r << endl;

        cout << "TERM " << c << " IS ";
        if (n%2 != 0)
            cout << n + 1 - r << "/" << r;
        else
            cout << r << "/" << n + 1 - r;
        cout << endl;


    }
    return 0;
}
