// Includes
#include <iostream>
#include <cmath>
#include <cstring>
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
    unsigned long long int n;
    cin >> n;
    cout << (n <= 1 || (n & (n - 1)) == 0 ? "TAK" : "NIE");
    return 0;
}
