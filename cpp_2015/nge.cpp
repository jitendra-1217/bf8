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

//Defines

//Loops
#define fr(i, m, n) for (int i = (m); i < (n); i++)

//Input/output
#define oline(n) cout << (n) << endl
#define o(n) cout << (n)



using namespace std;

int main()
{
    //Code starts..
    int a[] = {7, 6, 5, 8, 9, 1, 2, 2};
    int a_size = 8;
    stack<int> s;

    int next;

    s.push(a[0]);
    fr(i, 1, a_size) {
        next = a[i];

        while(!s.empty() && next > s.top()) {
            cout << s.top() << " - " << next << endl;
            s.pop();
        }
        s.push(next);
    }

    while(!s.empty()) {
        cout << s.top() << " - -1" << endl;
        s.pop();
    }

    return 0;
}
