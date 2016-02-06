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
    int n, ans = 0;
    cin >> n;
    while (n > 4) { n = n/5; ans += n; }
    cout << ans << endl;
    return 0;
}
