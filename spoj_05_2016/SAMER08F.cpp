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
    uli n;
    while (true)
    {
        cin >> n;

        if (n == 0)
        {
            break;
        }

        cout << (n * (n + 1) * (2*n + 1))/6 << endl;
    }

    return 0;
}
