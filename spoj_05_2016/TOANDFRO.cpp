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
    int c, l, r, i, j, t, t2;
    while (true)
    {
        cin >> c;
        if (c == 0)
        {
            break;
        }
        char msg[201];
        cin >> msg;

        l = strlen(msg);
        r = l/c;

        for (i = 0; i < c; ++i)
        {
            for (j = 0; j < r; ++j)
            {
                t = i + j*c;
                if (j%2 == 0)
                {
                    cout << msg[t];
                }
                else
                {
                    t2 = t%c;
                    if (c%2 != 0)
                    {
                        cout << msg[t - 2*t2 + 2*(c/2)];
                    }
                    else
                    {
                        cout << msg[t - 2*t2 + c - 1];
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}
