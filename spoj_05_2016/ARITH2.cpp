// Includes
#include <iostream>
#include <cmath>
#include <cstring>
#define KMAX 5001
// Namespaces
using namespace std;
// Prototypes
// Main
int main()
{
    long long int t, a, b;
    char op;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld", &a);
        while (1)
        {
            scanf("%c", &op);
            if (op == '=')
                break;
            scanf("%lld", &b);
            switch (op)
            {
                case '+':
                    a += b;
                    break;
                case '-':
                    a -= b;
                    break;
                case '*':
                    a *= b;
                    break;
                case '/':
                    a /= b;
                    break;
            }
        }
        printf("%lld\n", a);
    }
    return 0;
}
