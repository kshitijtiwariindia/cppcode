#include "include.h"
using namespace std;

int main()
{
    cout << "Your system has been hacked by me!!\n";
    cout << "if you tried to close this window.I will format your pc.\n";
    cout << "don't even try to reboot.....";
    cout << "Want a demo?\n1 for Yes\n0 for No";
    int a;
    cin >> a;
    if (a == 1)
    {
        system("nautilus");
        cout << "opening files\n";
    }
    cout << "pay 400$ to the following account no.\n";
    this_thread::sleep_for(chrono::milliseconds(3000));
    cout << "abhi mera account no. nahi hai. jab ban jayega to le lunga.\n";
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "kaisa lagaa mera mazaak?\nReboot kar deta hun to chala lena. magar band mat karna.";
    this_thread::sleep_for(chrono::milliseconds(3000));
    cout << "\nrebooting in 10 Seconds";
    this_thread::sleep_for(chrono::milliseconds(10000));
    cout << "\nrebooting";
    system("reboot");
}
