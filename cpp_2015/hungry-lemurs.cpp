/*
 * Jitendra Ojha
 *
 * NIT Patna
 */

//Includes
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

using namespace std;

int main()
{
    int t, n, k, l, m, i;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        if (k > 81) {
            cout << "-1" << endl;
            continue;
        }
        l = k/9;
        m = k%9;
        if (m == 0) {
            m = 9;
        } else {
            ++l;
        }
        if (m <= l) --m;

        i = 0;
        while (i < n) {
            cout << l;
            ++i;
            if (i < n) {
                cout << m;
                ++i;
            }
        }
        cout << endl;
    }
    return 0;
}
