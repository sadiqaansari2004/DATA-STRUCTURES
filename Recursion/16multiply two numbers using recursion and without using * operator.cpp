// program to multiply two numbers recursively without using multiplication operator
#include<iostream>
using namespace std;
int multi(int m, int n)
{
   if(m==0 || n==0)
   return 0;
   if(m==1)
   return n;
   return m+(multi(m, n-1));
}
int main()
{
    int m, n, ans;
    cout<<"Enter values of m and n:"<<endl;
    cin>>m>>n;
    ans=multi(m, n);
    cout<<ans<<endl;
}
