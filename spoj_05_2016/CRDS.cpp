// Includes
#include <iostream>
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
    while (t--)
    {
        cin >> n;
        cout << ((n * (3*n + 1))/2)%1000007 << endl;
    }
    return 0;
}
