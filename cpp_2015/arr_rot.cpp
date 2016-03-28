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

int gcd(int a, int b)
{

    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    //Code starts..
    //
    //O(n), O(rt_by)

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int rt_by = 2;

    int *t = new int(rt_by);
    int arr_size = sizeof(arr)/sizeof(int);

    fr (i, 0, rt_by) {
        t[i] = arr[i];
    }

    fr (i, 0, arr_size - rt_by) {
        arr[i] = arr[i + rt_by];
    }

    fr(i, arr_size-rt_by, arr_size) {
        arr[i] = t[i - arr_size + rt_by];
    }

    //print
    fr (i, 0, arr_size) {
        cout << arr[i] << endl;
    }


    //Method 2:
        //O(n), O(1)

    int nr = gcd(arr_size, rt_by);

    fr (i, 0, nr) {

        int t = arr[i];
        int j = i;

        while (j + nr <= arr_size) {

            arr[j] = arr[j + nr];
            j += nr;
        }

        arr[j] = t;
    }


    cout << endl << endl;
    //print
    fr (i, 0, arr_size) {
        cout << arr[i] << endl;
    }

    return 0;
}
