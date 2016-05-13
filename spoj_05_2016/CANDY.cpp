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
    li n, n2, t, sum, avg;
    while (true)
    {
        cin >> n;
        n2 = n;

        if (n == -1)
        {
            break;
        }

        sum = 0;
        vector<li> v;
        while (n--)
        {
            cin >> t;
            v.push_back(t);
            sum += t;
        }

        if (sum%n2 != 0) {
            cout << "-1" << endl;
            continue;
        }

        avg = sum/n2;
        t = 0;
        for (vector<li>::iterator it = v.begin(); it != v.end(); ++it)
        {
            if (*it < avg)
            {
                t += (avg - *it);
            }
        }

        cout << t << endl;
    }

    return 0;
}
