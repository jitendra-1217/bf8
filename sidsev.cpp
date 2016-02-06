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
#define PI 3.14

using namespace std;

int main()
{
    int t, a;
    double h, th, b, tth, ans;
    cin >> t;
    while (t--) {
        cin >> a >> h >> th;
        tth = tan(th * PI/180.0);
        b = ceil(h/tth);
        ans = b <= a ? ceil(h*b*0.5/a) : ceil((h*b - (b-a)*tth)*0.5/a);
        cout << ans << endl;
    }
    return 0;
}
