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

void sorted_insert(stack<int>& s, int v) {
    if (s.empty() || v < s.top()) {
        s.push(v);
    } else {
        int popped_v = s.top();
        s.pop();
        sorted_insert(s, v);
        s.push(popped_v);
    }
}

void reverse_rec(stack<int>& s) {
    int popped_v = s.top();
    s.pop();
    if (!s.empty()) {
        reverse_rec(s);
    }
    sorted_insert(s, popped_v);
}

int main()
{
    //Code starts..
    stack<int> s;
    s.push(6);
    s.push(2);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(1);

    reverse_rec(s);

    while(!s.empty()) {
        oline(s.top());
        s.pop();
    }

    return 0;
}
