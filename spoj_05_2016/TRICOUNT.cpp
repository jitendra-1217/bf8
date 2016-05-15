// Includes
#include <iostream>
#include <algorithm>

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
    long long int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << (3*n*n - n)/2 << endl;
    }
    return 0;
}
