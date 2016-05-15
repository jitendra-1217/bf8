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
    long long int t, t2, n, f, i, temp;
    long long int* a;
    cin >> t;
    t2 = 0;
    while(t2 < t)
    {
        ++t2;
        cin >> n >> f;
        a = new long long int[f];
        i = 0;
        while(i < f)
        {
            cin >> temp;
            *(a + i) = temp;
            ++i;
        }
        sort(a, a + f);
        reverse(a, a + f);
        i = 0;
        while(i < f)
        {
            n -= a[i];
            ++i;
            if(n <= 0)
                break;
        }
        cout << "Scenario #" << t2 << ":" << endl;
        if(n > 0)
            cout << "impossible";
        else
            cout << i;
        cout << endl << endl;
    }
    return 0;
}
