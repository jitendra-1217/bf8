/*
 * Jitendra Ojha
 *
 * Software engineer @ Practo
 *
 * - Infix to postfix conversion
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
//Declaration and initialization


using namespace std;

int is_operator(char ch)
{
    switch(ch)
    {
        case '(':
        case ')':
        case '+':
        case '-':
        case '*':
        case '/':
            return 1;
    }
    return 0;
}

int precedence(char ch)
{
    switch(ch)
    {
        case '(':
        case ')':
            return 1;
        case '+':
        case '-':
            return 2;
        case '*':
        case '/':
            return 3;
    }
    return -1;
}


int main()
{
    //Code starts..
    string infix;
    cin >> infix;

    stack<char> stk;
    queue<char> q;

    fr(i, 0, infix.length()) {
        if (is_operator(infix[i]) == 1) {

            if (infix[i] == '(') {
                stk.push(infix[i]);
                continue;
            }

            if (infix[i] == ')') {
                while (!stk.empty() && stk.top() !=  '(') {
                    q.push(stk.top());
                    stk.pop();
                }
                stk.pop();
                continue;
            }

            while(!stk.empty() &&
                    precedence(stk.top()) > precedence(infix[i])) {

                q.push(stk.top());
                stk.pop();
            }
            stk.push(infix[i]);
        } else {
            q.push(infix[i]);
        }
    }

    while(!stk.empty())
    {
        q.push(stk.top());
        stk.pop();
    }

    while(!q.empty())
    {
        o(q.front());
        q.pop();
    }

    return 0;
}
