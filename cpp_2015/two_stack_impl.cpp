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

class TwoStacks
{
    int *arr;
    int size_arr;
    int top1;
    int top2;

    public:
    TwoStacks(int size_arr) {
        this->arr = new int[size_arr];
        this->size_arr = size_arr;
        this->top1 = -1;
        this->top2 = size_arr;
    }

    int pop1() {
        if (this->top1 < 0) {
            oline("Stack underflow..");
            exit(2);
        }
        int x = *(this->arr + this->top1);
        --this->top1;
        return x;
    }

    int pop2() {
        if (this->top2 >= this->size_arr) {
            oline("Stack overflow..");
            exit(2);
        }
        int x = *(this->arr + this->top2);
        ++this->top2;
        return x;
    }

    void push1(int x) {
        if (this->top2 - this->top1 <= 1) {
            oline("Stack overflow..");
        }
        ++this->top1;
        *(this->arr + this->top1) = x;
    }

    void push2(int x) {
        if (this->top2 - this->top1 <= 1) {
            oline("Stack overflow..");
        }
        --this->top2;
        *(this->arr + this->top2) = x;
    }
};

int main()
{
    //Code starts..
    TwoStacks ts(3);

    //Testing..
    ts.push1(5);
    ts.push1(4);
    ts.push2(1);

    cout << ts.pop1();
    cout << ts.pop1();
    cout << ts.pop2();


    return 0;
}
