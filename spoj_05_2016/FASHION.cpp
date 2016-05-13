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
#include <cstring>
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
    uli tc;
    unsigned int n, n2, t, s;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        vector<unsigned int> v1;
        vector<unsigned int> v2;

        n2 = n;
        while (n2--)
        {
            cin >> t;
            v1.push_back(t);
        }
        n2 = n;
        while (n2--)
        {
            cin >> t;
            v2.push_back(t);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        n2 = 0;
        s = 0;
        while (n2 < n)
        {
            s += (v1[n2]*v2[n2]);
            ++n2;
        }
        cout << s << endl;
    }

    return 0;
}
