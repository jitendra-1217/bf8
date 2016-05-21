// Includes
#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
// Namespaces
using namespace std;
// Prototypes
// Main
int main()
{
    map<string, int> init_states;
    init_states["TTT"] = 0;
    init_states["TTH"] = 1;
    init_states["THT"] = 2;
    init_states["THH"] = 3;
    init_states["HTT"] = 4;
    init_states["HTH"] = 5;
    init_states["HHT"] = 6;
    init_states["HHH"] = 7;

    int states[8][2] = {
        {0, 1},
        {2, 3},
        {4, 5},
        {6, 7},
        {0, 1},
        {2, 3},
        {4, 5},
        {6, 7}
    };
    int states_count[8] ={0};
    int p, i, j, current_state, slen;
    string s;
    cin >> p;
    while (p--)
    {
        cin >> i;
        cin >> s;

        // Find first state
        current_state = init_states[s.substr(0, 3)];
        for (j = 0; j < 8; ++j)
        {
            states_count[j] = 0;
        }
        ++states_count[current_state];
        slen = s.length();
        for (j = 3; j < slen; ++j)
        {
            if (s[j] == 'T')
            {
                current_state = states[current_state][0];
            }
            else
            {
                current_state = states[current_state][1];
            }
            ++states_count[current_state];
        }

        cout << i << " ";
        for (j = 0; j < 8; ++j)
        {
            cout << states_count[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
