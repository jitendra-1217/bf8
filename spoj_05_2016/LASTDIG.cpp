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
    int t;
    long long int a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        a = a%10;
        b = b%4;
        if (b == 0)
        {
            b = 4;
        }
        a = (int) pow((double) a, (double) b);
        cout << a%10 << endl;
    }
    return 0;
}
