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
#define _ULI unsigned long int
#define _LI  long int
#define _UI  unsigned int
#define _MAX 10000
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
    _ULI n;
    cin >> n;
    while (n--)
    {

        char n1[_MAX], n2[_MAX];
        cin >> n1 >> n2;

        _UI n1_len, n2_len, min_len;
        n1_len = strlen(n1);
        n2_len = strlen(n2);

        min_len = n1_len < n2_len ? n1_len : n2_len;

        _UI i, sum, cf, res;
        cf = 0;
        bool trailing_zero = true;
        for (i = 0; i < min_len; ++i)
        {
            sum = (n1[i] - '0') + (n2[i] - '0') + cf;
            cf = sum / 10;
            res = sum % 10;
            if (res == 0 && trailing_zero)
            {
            }
            else
            {
                trailing_zero = false;
                cout << res;
            }
        }

        if (n1_len > min_len) {
            for (i = min_len; i < n1_len; ++i)
            {
                sum = (n1[i] - '0') + cf;
                cf = sum / 10;
                res = sum % 10;
                if (res == 0 && trailing_zero)
                {
                }
                else
                {
                    trailing_zero = false;
                    cout << res;
                }
            }
        }

        if (n2_len > min_len) {
            for (i = min_len; i < n2_len; ++i)
            {
                sum = (n2[i] - '0') + cf;
                cf = sum / 10;
                res = sum % 10;
                if (res == 0 && trailing_zero)
                {
                }
                else
                {
                    trailing_zero = false;
                    cout << res;
                }
            }
        }

        if (cf != 0) {
            cout << cf;
        }

        cout << endl;
    }
    return 0;
}
