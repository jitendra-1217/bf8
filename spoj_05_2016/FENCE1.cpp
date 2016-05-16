// Includes
#include <iostream>
#include <cmath>
#include <cstdio>
// #include <cstring>
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
    int l;
    float ans;
    while (1)
    {
        cin >> l;
        if (l == 0)
            break;
        ans = (l*l)/(2*3.1415926);
        printf("%0.2f\n", ans);
    }
    return 0;
}
