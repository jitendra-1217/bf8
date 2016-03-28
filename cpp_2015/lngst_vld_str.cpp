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
    string str;
    cin >> str;

    stack<char> stk;
    int lngst_value = -1;
    int lngst_value_local = 0;

    fr(i, 0, str.length()) {
        
        if (str[i] == '(') {

            stk.push(str[i]);
        } else if (str[i] == ')') {

            //Pop if ( incr local cnt by 2 else reset
            if (!stk.empty() && stk.top() == '(') {
                stk.pop();
                lngst_value_local += 2;
            } else {
                stk = stack<char>();
                lngst_value = lngst_value_local > lngst_value ?
                    lngst_value_local : lngst_value;
                lngst_value_local = 0;
            }

        }
    }
    lngst_value = lngst_value_local > lngst_value ?
        lngst_value_local : lngst_value;

    oline(lngst_value);

    return 0;
}
