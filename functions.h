#include "include.h"

bool is_numeric(char *a)
{
    if (a[0] < '0')
        return false;
    if (a[0] > '9')
        return false;
    return true;
}
int hack()
{
    cout << "Your system has been hacked by me!!\n";
    cout << "if you tried to close this window.I will format your pc.\n";
    cout << "don't even try to reboot.....";
    cout << "Want a demo?\n1 for Yes\n0 for No";
    int a;
    cin >> a;
    if (a = 1)
    {
        system("Notepad");
        cout << "opening notepad";
    }
    cout << "pay 400$ to the following account no.";
    cout << "abhi mera account no. nahi hai. jab ban jayega to le lunga.";

    cout << "kaisa lagaa mera mazaak?\nReboot kar deta hun to chala lena. magar band mat karna.";
    cout << "rebooting in 10 Seconds" << endl;
    this_thread::sleep_for(chrono::milliseconds(100000));
    cout << "rebooting";
    system("shutdown /r");
}
char calc()
{
    char op;
    float num1, num2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;

    case '-':
        cout << num1 - num2;
        break;

    case '*':
        cout << num1 * num2;
        break;

    case '/':
        cout << num1 / num2;
        break;
    }
    return 0;
}