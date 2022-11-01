// program to calculate exponent of a number
#include<iostream>
using namespace std;

int power(int x, int n){
    if(n!=0)
        return (x*power(x, n-1));
    else
        return 1;
}
int main(){
    int x, n;
    cout<<"Enter x and n:"<<endl;
    cin>>x>>n;
    int output=power(x, n);
    cout<<output<<endl;
}
