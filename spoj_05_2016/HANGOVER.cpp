// Includes
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cfloat>

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
    double c;
    int n;
    while (true)
    {
        cin >> c;
        if (c - 0.00 < FLT_EPSILON)
        {
            break;
        }
        // These are not working - Approximate formula
        // cout << ceil(exp(c + 0.5772 + 1) - 1) << " card(s)" << endl;
        cout << ceil(exp(c + 1 - 0.5772) - 0.5) - 1 << " card(s)" << endl;
        // n = 2;
        // while (true)
        // {
        //     c -= 1/(double)n;
        //     if (c - 0.00 < FLT_EPSILON)
        //     {
        //         break;
        //     }
        //     ++n;
        // }
        // cout << n - 1 << " card(s)" << endl;
    }
    return 0;
}
