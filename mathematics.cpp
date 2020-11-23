#include "include.h"
using namespace std;

int main()
{
    cout << "Meet Your Mathematical Friend. I will help you in all of your mathematical problem.\n";
    cout << "what do you want to do?\n";
    char math ;
    cin >> math;
    const char *a = "calculator";
    switch (math)
    {
    case 'calc':
        system(a);
        break;

    default:
        break;
    }
}
