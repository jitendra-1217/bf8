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
    int t;
    cin >> t;
    long int n;
    for (long int i = 0; i < t; i++) {
        cin >> n;
        if (n == 3 || n == 4 || n == 6) {
            cout << "TRUE";
        } else {
            cout << "FALSE";
        }
        cout << endl;
    }
}
