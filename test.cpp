#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char **argv)
{
    int a, b;
    char opr;
    if (argc < 4)
    {
        cout << "Usage: " << argv[0] << " num1 operator num2\ne.g.\n"
             << argv[0] << " 5 + 6\n result: 11\n\n";
        return 0;
    }
    a = atoi(argv[1]);
    b = atoi(argv[3]);
    opr = argv[2][0];
    switch (opr)
    {
    case '+':
        cout << "result:" << a + b << "\n";
        break;
    case '-':
        cout << "result:" << a - b << "\n";
        break;
    case '*':
        cout << "result:" << a * b << "\n";
        break;
    case '/':
        cout << "result:" << a / b << "\n";
        break;

    default:
        break;
    }
    return 0;
}