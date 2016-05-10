// Includes
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
#include <cstring>
#include <utility>
#include <vector>
#include <cmath>
// Defines
#define uli unsigned long int
#define li  long int
#define ui  unsigned int
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
    // main()
    int t;
    cin >> t;
    while (t--)
    {
        char s[401];
        cin >> s;
        ui s_len = strlen(s);

        vector<char> op;
        ui i;
        for (i = 0; i < s_len; ++i)
        {
            switch (s[i])
            {
                case '+':
                case '-':
                case '/':
                case '*':
                case '^':
                    op.push_back(s[i]);
                    break;
                case '(':
                    break;
                case ')':
                    cout << op.back();
                    op.pop_back();
                    break;
                default:
                    cout << s[i];
                    break;
            }
        }
        while (!op.empty())
        {
            cout << op.back();
            op.pop_back();
        }
        cout << endl;
    }
    return 0;
}
