// Includes
#include <cstdio>
#include <cmath>
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
    int n, x, i, y, j;
    scanf("%d", &n);
    x = 1;
    // printf("x = %d\n", x);
    for (i = 2; i <= n; ++i)
    {
        ++x;
        y = (int) sqrt(i);
        // printf("------> y = %d\n", y);
        for (j = 2; j <= y; ++j)
        {
            if (i % j == 0)
            {
                ++x;
            }
        }
        // printf("x = %d\n", x);
    }
    printf("%d\n", x);

    return 0;
}
