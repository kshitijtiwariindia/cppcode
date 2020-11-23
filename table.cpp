#include "include.h"
#include "functions.h"
using namespace std;

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        cout << "Please enter a Value!\n";
        return 0;
    }
    if (!is_numeric(argv[1]))
    {
        cout << "Please enter numeric value!\n";
        return 0;
    }
    int a;
    a = atoi(argv[1]);
    int b = 1;
    while (b <= 10)
    {
        cout << a << "x" << b << "=" << b * a << "\n";
        b++;
    }
    return 0;
}