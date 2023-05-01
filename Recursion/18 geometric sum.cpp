// program to calculate geometric sum
#include <iostream>
using namespace std;
#include <math.h>

float GS(int k)
{
    if (k == 0)
        return 1;
    return 1.0 / pow(2, k) + GS(k - 1);
}
int main()
{
    int k;
    cout << "Enter the last kth term value:" << endl;
    cin >> k;
    cout << GS(k) << endl;
}
