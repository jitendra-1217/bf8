// Includes
#include <iostream>
#include <cmath>
#include <cstring>
#define KMAX 5001
// Namespaces
using namespace std;
// Prototypes

void DoDP(char* s, int i, int l, int f, unsigned long long int &ans)
{
    // cout << "DEBUG" << endl;
    if (i == l)
    {
        ++ans;
        return;
    }
    if ((s[i] - '0') != 0)
    {
        DoDP(s, i + 1, l, 0, ans);
    }
    if (f != 1 && 10*(s[i - 1] - '0') + (s[i] - '0') <= 26)
    {
        DoDP(s, i + 1, l, 1, ans);
    }
    return;
}

// Main
/**
 * [main description]
 * @return [description]
*/
int main()
{
    char s[KMAX];
    unsigned long long int ans;
    while (true)
    {
        cin >> s;
        if (s[0] == '0')
        {
            break;
        }
        ans = 0;
        DoDP(s, 1, strlen(s), 0, ans);
        cout << ans << endl;
    }
    return 0;
}
