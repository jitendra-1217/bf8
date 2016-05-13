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
    long long int t, k, kb4, km4;
    cin >> t;
    while (t--)
    {
        cin >> k;
        kb4 = k/4;
        km4 = k%4;
        kb4 = km4 > 0 ? kb4 : kb4 - 1;
        if (kb4 > 0)
        {
            cout << kb4;
        }
        switch (km4)
        {
            case 0:
                cout << "942";
                break;
            case 1:
                cout << "192";
                break;
            case 2:
                cout << "442";
                break;
            case 3:
                cout << "692";
                break;
        }
        cout << endl;
    }
    return 0;
}
