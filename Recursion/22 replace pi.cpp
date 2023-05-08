// program to replace pi with 3.14
#include <iostream>
#include <string.h>
using namespace std;

void replace(char *s)
{
    if (strlen(s) == 0 || strlen(s) == 1)
        return;
    if (s[0] == 'p')
    {
        if (s[1] == 'i')
        {
            for (int i = strlen(s); i >= 2; i--)
                s[i + 2] = s[i];
            s[0] = '3';
            s[1] = '.';
            s[2] = '1';
            s[3] = '4';
            replace(s + 4);
        }
        replace(s + 1);
    }
    replace(s + 1);
}
int main()
{
    char st[50];
    cout << "input string:" << endl;
    cin >> st;
    replace(st);
    cout << st << endl;
}
