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
    uli t, n, s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        s = 0;
        while (n != 0)
        {
            n = n/5;
            s += n;
        }
        cout << s << endl;
    }
    return 0;
}
