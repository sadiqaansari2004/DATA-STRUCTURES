// program to check given string is palindrome or not recursively
#include <iostream>
#include <string>
using namespace std;

bool checkpalindrome(string str, int length)
{
    if (length == 1 || length==0)
        return true;
    if (str[0] == str[length - 1])
        return checkpalindrome(str.substr(1, length - 2), length - 2);
    return false;
}
int main()
{
    string str;
    cout << "input string:" << endl;
    cin >> str;
    int length = str.size();
    bool ans = checkpalindrome(str, length);
    if (ans == 1)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
