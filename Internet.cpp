#include "include.h"

using namespace std;

int main()
{
    const char *b = "ping 192.168.1.2 -c 5";
    const char *c = "ping 10.0.0.2 -c 5";
    const char *a = "ping 8.8.8.8 -c 5";
    system(a);
    this_thread::sleep_for(chrono::milliseconds(3000));    
    system(b);
    this_thread::sleep_for(chrono::milliseconds(3000)); 
    system(c);
    this_thread::sleep_for(chrono::milliseconds(3000));
    return 0;
}