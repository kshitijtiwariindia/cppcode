#include "include.h"
using namespace std;

int main(int argc, char **argv)
{
    int a;
    a = atoi(argv[1]);
    for (size_t i = 0; i < a; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}
