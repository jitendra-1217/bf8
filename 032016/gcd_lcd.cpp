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

using namespace std;

int gcd(int x, int y) {

    int k;
    if (x < y) {
        k = x;
        x = y;
        y = k;
    }
    while (y) {
        k = x%y;
        x = y;
        y = k;
    }
    return x;
}

int gcda(int n, int a[n]) {

    if (n == 1) return a[0];
    if (n == 2) return gcd(a[0], a[1]);

    int prev_gcd = gcd(a[0], a[1]);
    int res;
    for (int i = 2; i < n; i++) {
        res = gcd(prev_gcd, a[i]);
    }
    return res;
}

int lcd(int x, int y) {

    return x*y/gcd(x, y);
}

int lcda(int n, int a[n]) {

    if (n == 1) return a[0];
    if (n == 2) return lcd(a[0], a[1]);

    int prev_lcd = lcd(a[0], a[1]);
    int res;
    for (int i = 2; i < n; i++) {
        res = lcd(prev_lcd, a[i]);
    }
    return res;
}

int main()
{
    cout << gcd(15, 25) << endl;
    cout << gcd(12, 1) << endl;

    int a[] = {15, 30, 45};
    int size_a = sizeof(a)/sizeof(int);
    cout << gcda(size_a, a) << endl;
    cout << lcda(size_a, a) << endl;


    return 0;
}
