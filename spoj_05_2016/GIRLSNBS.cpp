// Includes
#include <iostream>
#include <cmath>
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
    int g, b, s;
    while (1)
    {
        cin >> g >> b;
        if (g == -1 && b == -1)
            break;
        if (g == b)
        {
            if (g == 0)
                cout << "0";
            else
                cout << "1";
        }
        else if (g == 0)
        {
            cout << b;
        }
        else if (b == 0)
        {
            cout << g;
        }
        else if (g > b)
        {
            s = g/(b + 1);
            // cout << s << endl;
            cout << (g%(b + 1) == 0 ? s : s + 1);
        }
        else
        {
            s = b/(g + 1);
            cout << (b%(g + 1) == 0 ? s : s + 1);
        }
        cout << endl;
    }
    return 0;
}
