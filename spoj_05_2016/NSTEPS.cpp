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
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;

        if (x == y) {
            if (x%2 == 0)
            {
                cout << 2*x;
            }
            else
            {
                cout << 2*x - 1;
            }
        } else if(x - y == 2) {
            if (x%2 == 0)
            {
                cout << 2*x - 2;
            }
            else
            {
                cout << 2*y + 1;
            }
        } else {
            cout << "No Number";
        }
        cout << endl;
    }

    return 0;
}
