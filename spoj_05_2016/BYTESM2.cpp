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
    long long int t, h, w, i, j, local_max, ans;
    cin >> t;
    while (t--)
    {
        cin >> h >> w;
        long long int m[h][w];
        for (i = 0; i < h; ++i)
        {
            for (j = 0; j < w; ++j)
            {
                cin >> m[i][j];
            }
        }

        // Start from 2nd row and use the same storage to put values
        for (i = 1; i < h; ++i)
        {
            for (j = 0; j < w; ++j)
            {
                // Get max of prev contacts and replace value
                local_max = m[i-1][j];
                if (j > 0 && m[i-1][j-1] > local_max)
                    local_max = m[i-1][j-1];
                if (j < w -1 && m[i-1][j+1] > local_max)
                    local_max = m[i-1][j+1];
                m[i][j] += local_max;
            }
        }

        // Find biggest value
        ans = -1;
        for (j = 0; j < w; ++j)
        {
            if (m[h-1][j] > ans)
                ans = m[h-1][j];
        }
        cout << ans << endl;
    }
    return 0;
}
