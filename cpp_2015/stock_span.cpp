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


void calc_span(int stock_prices[], int stock_prices_size,
        queue<int>& output_q) {
    
    stack<int> stk;
    stk.push(0);
    output_q.push(1);

    fr(i, 1, stock_prices_size) {

        while(!stk.empty() &&
                stock_prices[i] >= stock_prices[stk.top()]) {

            stk.pop();
        }

        output_q.push((stk.empty() ? (i + 1) : (i - stk.top())));

        stk.push(i);
    }
}

int main()
{
    //Code starts..
    int stock_prices[] = {100, 80, 60, 70, 60, 75, 85};
    queue<int> output_q;
    int stock_prices_size = 7;

    calc_span(stock_prices, stock_prices_size, output_q);


    while(!output_q.empty()) {
        oline(output_q.front());
        output_q.pop();
    }

    return 0;
}
