// Includes
#include <iostream>
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
    long long int x, y;
    cin >> x;
    y = x%10;
    if (y == 0)
        cout << "2";
    else
        cout << "1" << endl << y;

    return 0;
}
