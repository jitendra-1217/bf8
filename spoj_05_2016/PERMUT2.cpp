// Includes
#include <iostream>
// #include <algorithm>

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
    long long int i, n, temp;
    long long int* a;
    while(true)
    {
        cin >> n;
        if (n == 0)
            break;
        a = new long long int[n];
        i = 0;
        while(i < n)
        {
            cin >> temp;
            *(a + i) = temp;
            ++i;
        }

        i = 0;
        while(i < n)
        {
            if (i + 1 != *(a + *(a + i) - 1))
                break;
            ++i;
        }
        cout << (i == n ? "ambiguous" : "not ambiguous");
        cout << endl;
    }
    return 0;
}
