// Includes
#include <iostream>
#include <algorithm>
#include <deque>
#include <fstream>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <cmath>
// Defines
#define uli unsigned long int
#define li  long int
// Namespaces
using namespace std;
// Prototypes
vector<uli> GetAllPrimesBetweenMAndN(uli& m, uli& n);
bool IsPrime(uli& x);
// Main
/**
 * [main description]
 * @return [description]
 */
int main()
{
    // main()
    int t;
    cin >> t;

    while (t--)
    {
        uli m, n;
        cin >> m >> n;
        // vector<uli> primes;
        // primes = GetAllPrimesBetweenMAndN(m, n);
        // for (vector<uli>::iterator it = primes.begin(); it != primes.end(); ++it)
        // {
        //     cout << *it << endl;
        // }
        for (uli i = m; i <= n; ++i)
        {
            if (IsPrime(i)) {
                cout << i << endl;
            }
        }
        cout << endl;
    }

    return 0;
}

/**
 * 
 */
vector<uli> GetAllPrimesBetweenMAndN(uli& m, uli& n)
{
    vector<uli> res;

    for (uli i = m; i <= n; ++i)
    {
        if (IsPrime(i)) {
            res.push_back(i);
        }
    }

    return res;
}

/**
 * [IsPrime description]
 * @param  x [description]
 * @return   [description]
 */
bool IsPrime(uli& x)
{
    switch (x)
    {
        case 0:
        case 1:
            return false;
        case 2:
        case 3:
        case 5:
        case 7:
            return true;
    }
    if (x % 2 == 0)
    {
        return false;
    }
    uli i, l;
    for (i = 3, l = ceil(sqrt(x)); i <= l; ++i)
    {
        if (x % i == 0)
        {
            return false;
        }
    }

    return true;
}
