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
#include <cmath>

using namespace std;

int main()
{
    long int a, b, n, x;
    cin >> a >> b >> n;
    x = (n-b)/(a-b);
    if ((n-b)%(a-b) == 0) cout << x; else cout << x+1;
    return 0;
}
