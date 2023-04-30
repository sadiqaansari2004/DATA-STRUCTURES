// program to count number of zeros present in the given number
#include <iostream>
using namespace std;

int count(int num)
{
    static int zeros = 0;
    if (num == 0)
        return zeros;
    if (num % 10 == 0)
        zeros++;
    return count(num / 10);
}

int main()
{
    int num;
    cout << "Enter any number:" << endl;
    cin >> num;
    if (num == 0)
        cout << "1 zero is present in the number" << endl;
    else
    {
        int ans = count(num);
        if (ans <= 0)
            cout << "NO zero is present in the number" << endl;
        else
            cout << ans << endl;
    }
}
