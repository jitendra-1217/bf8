// Includes
#include <iostream>
#include <cstring>
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
    char[1000] a;
    long long int b;
    int a2;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        a2 = a[strlen(a) - 1] - '0';
        b = b%4;
        if (b == 0)
        {
            b = 4;
        }
        a2 = (int) pow((double) a2, (double) b);
        cout << a2%10 << endl;
    }
    return 0;
}
