// Includes
#include <iostream>
#include <algorithm>
#include <deque>
#include <fstream>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <cmath>
// Defines
#define MAX 1000
#define uli unsigned long int
#define li  long int
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
    int t, n, nb, i, j, k, cf, mul;
    int n_arr[MAX];
    cin >> t;
    while (t--)
    {
        cin >> n;
        nb = n;
        for (i = 0; i < MAX; ++i)
        {
            n_arr[i] = -1;
        }
        i = 0;
        while (n != 0) {
            n_arr[i] = n%10;
            n = n/10;
            ++i;
        }
        for (i = nb - 1; i > 0; --i)
        {
            cf = 0;
            for (j = 0; j < MAX; ++j)
            {
                if (n_arr[j] == -1)
                {
                    break;
                }
                mul = (n_arr[j] * i) + cf;
                n_arr[j] = mul%10;
                cf = mul/10;
            }
            while (cf != 0)
            {
                n_arr[j] = cf%10;
                cf = cf/10;
                ++j;
            }
        }
        for (i = 0; i < MAX && n_arr[i] != -1; ++i)
        {
        }
        for (k = i - 1; k >= 0; --k)
        {
            cout << n_arr[k];
        }
        cout << endl;
    }

    return 0;
}
