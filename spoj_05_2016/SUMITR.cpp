
// Includes
#include <iostream>
#include <cstdio>
// Namespaces
using namespace std;
// Prototypes
// Main
int main()
{
    int t, n, i, j, ans;
    int a[101][101];
    cin >> t;
    while (t--) {
        cin >> n;

        for (i = 0; i < n; ++i) {
            for (j = 0; j < n; ++j) {
                a[i][j] = 0;
            }
        }

        for (i = 0; i < n; ++i) {
            for (j = 0; j <= i; ++j) {
                cin >> a[i][j];
            }
        }

        for (i = 1; i < n; ++i) {
            for (j = 0; j <= i; ++j) {
                if (j == 0) {
                    a[i][j] += a[i-1][j];
                } else {
                    a[i][j] += (a[i-1][j] > a[i-1][j-1] ? a[i-1][j] : a[i-1][j-1]);
                }
            }
        }

        ans = a[n-1][0];
        for (j = 1; j < n; ++j) {
            if (a[n-1][j] > ans) {
                ans = a[n-1][j];
            }
        }

        cout << ans << endl;

        //for (i = 0; i < n; ++i) {
            //for (j = 0; j < n; ++j) {
                //cout << a[i][j] << " ";
            //}
            //cout << endl;
        //}

    }
    return 0;
}
