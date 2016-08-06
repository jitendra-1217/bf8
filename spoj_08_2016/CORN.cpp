// Includes
// #include <cstdio>
#include <iostream>
#include <cstdlib>
// #include <algorithm>
// #include <deque>
// #include <fstream>
// #include <iterator>
// #include <list>
// #include <map>
// #include <queue>
// #include <set>
// #include <stack>
#include <cstring>
#include <cmath>
// #include <utility>
// #include <vector>
// #include <cmath>
// Defines
#define uli unsigned long long int
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
    string s;
    // cin >> s;
    int t, i, j;
    float r, se, h;
    cin >> t;
    while (t--) {
        cin >> s;
        i = s.find_first_of("e");
        r = atof(s.substr(0, i).c_str());
        j = s.find_first_of("e", i + 1);
        se = atof(s.substr(i + 1, j - i - 1).c_str());
        h = atof(s.substr(j + 1, s.length() - j - 1).c_str());

        cout << ceil(3.1415*r*sqrt(r*r + h*h)*se) << endl;
    }

    return 0;
}
