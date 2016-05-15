// Includes
#include <iostream>
#include <algorithm>

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
    long long int i, j, ng, nm, temp, t, min;
    long long int* ag;
    long long int* am;
    cin >> t;
    while(t--)
    {
        cin >> ng >> nm;
        ag = new long long int[ng];
        i = 0;
        while(i < ng)
        {
            cin >> temp;
            *(ag + i) = temp;
            ++i;
        }
        am = new long long int[nm];
        i = 0;
        while(i < nm)
        {
            cin >> temp;
            *(am + i) = temp;
            ++i;
        }

        sort(ag, ag + ng);
        sort(am, am + nm);

        i = 0; // Godzilla
        j = 0; // MechaGodzilla

        while(i < ng && j < nm)
        {
            min = am[j] <= ag[i] ? am[j] : ag[i];

            while(am[j] == min && j < nm)
                ++j;
            if (j == nm)
                break;

            while(ag[i] == min && i < ng)
                ++i;
            if(i == ng)
                break;
        }

        if(i == ng)
            cout << "MechaGodzilla";
        else if(j == nm)
            cout << "Godzilla";
        else
            cout << "uncertain";
        cout << endl;

    }
    return 0;
}
