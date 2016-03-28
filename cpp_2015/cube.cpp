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
    int t;  cin >> t;
    long int n;
    while (t--) {
        cin >> n;
        if (n == 1) {
            cout << "1";
        } else if (n == 2) {
            cout << "8";
        } else {
            cout << 2 * (3*n*n - 6*n + 4);
        }
        cout << endl;
    }
    return 0;
}
