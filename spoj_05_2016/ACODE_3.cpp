// Includes
#include <iostream>
#include <cmath>
#include <cstring>
#define KMAX 5010
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
    char s[KMAX];
    unsigned long long int dp[KMAX];
    long long int l, i, x;
    while (true)
    {
        cin >> s;
        if (s[0] == '0')
        {
            break;
        }

        l = strlen(s);
        dp[0] = 1;
        for (i = 1; i < KMAX; ++i)
        {
            dp[i] = 0;
        }
        for (i = 1; i < l; ++i)
        {
            x = 10*(s[i - 1] - '0') + (s[i] - '0');
            if (s[i] - '0')
                dp[i] = dp[i - 1];
            if (x >= 10 && x <= 26)
                dp[i] += dp[(i - 2) < 0 ? 0 : i - 2];
            // cout << dp[i] << endl;
        }
        cout << dp[l - 1] << endl;
    }
    return 0;
}
