/*
 * Jitendra Ojha
 *
 * NIT Patna
 */

//Includes
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

//Defines

//Loops
#define fr(i, m, n) for (int i = (m); i < (n); i++)

//Input/output
#define oline(n) cout << (n) << endl
#define o(n) cout << (n)



using namespace std;

int main()
{
    //Code starts..
    int n[] = {1, 2, 4, 5, 6};
    int n_size = 5;
    //For xor of all the elements in array
    int x1 = n[0];
    //For xor of all elements from 1 to n
    int x2 = 1;

    //Get missing number
    fr(i, 1, n_size) {
        
        x1 ^= n[i];
    }

    fr(i, 2, n_size + 2) {

        x2 ^= i;
    }

    cout << (x1^x2);

    return 0;
}
