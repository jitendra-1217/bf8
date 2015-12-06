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

void reverse_rec(stack<int>& s) {
    int popped_v = s.top();
    s.pop();
    if (!s.empty()) {
        reverse_rec(s);
    }
    s.push(popped_v);
}

int main()
{
    //Code starts..
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    reverse_rec(s);

    while(!s.empty()) {
        oline(s.top());
        s.pop();
    }

    return 0;
}
