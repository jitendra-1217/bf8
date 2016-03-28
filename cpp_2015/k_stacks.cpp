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

class KStacks
{
    int* actual_arr;
    int actual_arr_size;
    int* k_tops;
    int k_tops_size;
    int* next_index;
    int free;

    public:
    KStacks(int k, int n) {
        this->k_tops_size = k;
        this->actual_arr_size = n;
        this->actual_arr = new int[this->actual_arr_size];
        this->next_index = new int[this->actual_arr_size];
        this->k_tops = new int[this->k_tops_size];
        this->free = 0;
    }

    bool spaceExists() {
        return (this->free != -1);
    }

    bool empty(int stack_index) {
        return (this->k_tops[stack_index] == -1);
    }

    void push(int stack_index, int value) {

        if (!this->spaceExists()) {
            oline("Space not available..");
            return;
        }

        int i = this->free;
        this->free = this->next_index[i];
        this->next_index[i] = this->k_tops[stack_index];
        this->k_tops[stack_index] = i;
        this->actual_arr[i] = value;

    }

    int pop(int stack_index) {
        
        if (this->empty(stack_index)) {
            oline("Stack underflow..");
        }
    
        int i = this->k_tops[stack_index];
        this->k_tops[stack_index] = this->next_index[i];
        this->next_index[i] = this->free;
        this->free = i;
        return this->actual_arr[i];

    }
};

int main()
{
    //Code starts..

    KStacks ks(3, 7);

    ks.push(1, 11);

    //ks.push(3, 31);

    //ks.push(1, 12);
    //ks.push(1, 13);

    ks.push(2, 21);

    //ks.push(3, 32);

    //ks.push(2, 22);
    //ks.push(2, 23);


    //oline(ks.pop(3));

    oline(ks.pop(2));
    //oline(ks.pop(2));

    oline(ks.pop(1));


    return 0;
}
