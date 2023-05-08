// program to remover x from given string
#include <iostream>
#include <string.h>
using namespace std;

char remove(char *s, int len, char *output)
{
    if (len == 0)
        return *output;
    if (s[0] != 'x')
    {
        output[0] = s[0];
        output[1]='\0';
        return remove(s + 1, len - 1, output + 1);
    }
    return remove(s + 1, len - 1, output);
}
int main()
{
    char st[50], ans[50];
    cout << "input string:" << endl;
    cin >> st;
    remove(st, strlen(st), ans);
    cout<<ans<<endl;
}
