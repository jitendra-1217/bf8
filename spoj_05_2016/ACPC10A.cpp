/*input
2 4 6
0 0 0
*/
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
    int a1, a2, a3;
    while (true)
    {
        cin >> a1 >> a2 >> a3;

        if (a1 == 0 && a2 == 0 && a3 == 0)
        {
            break;
        }

        if (a3 == 2*a2 - a1)
        {
            cout << "AP " << 2*a3 - a2;
        } else {
            cout << "GP " << (a3*a3)/a2;
        }
        cout << endl;
    }

    return 0;
}
