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

int getRsum(int n) {
    string s = to_string(n);
    int rsum = 0;
    for (int i = 0; i < s.length(); i++) {
        rsum += (s[i] - '0');
    }
    if (rsum < 10) { return rsum; } else { return getRsum(rsum); }
}

int main()
{
    int t, a, b, f1, rsum;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        f1 = a;
        for (int i = a-1; i > 1; i--) {
            f1 *= i;
        }
        rsum = getRsum(f1);
        for (int i = a + 1; i <= b; i++) {
            f1 *= i;
            rsum += getRsum(f1);
        }
        cout << rsum << endl;
    }
    return 0;
}
