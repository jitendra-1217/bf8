// Includes
#include <iostream>
#include <cstdio>
// #include <cmath>
#include <map>
// Namespaces
using namespace std;
// Prototypes

// Main
/**
 * [main description]
 * @return [description]
*/
map<long long int, long long int> mp;
// map<long long int, long long int>::iterator it;

long long int Follow(long long int n)
{
    if (n == 0)     return 0;
    if (n == 1)     return 1;
    if (mp[n] != 0)     return mp[n];
    mp[n] = Follow(n/2) + Follow(n/3) + Follow(n/4);
    if (mp[n] < n)
    {
        mp[n] = n;
    }
    return mp[n];
}

int main()
{
    // main()
    long long int n;
    while (scanf("%lld", &n) == 1)
    {
        cout << Follow(n) << endl;
    }
    return 0;
}
