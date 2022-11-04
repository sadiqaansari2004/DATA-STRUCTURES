// program to find the nth element of fibonacci series
#include<iostream>
using namespace std;

int fibonacci(int n){
    int smallnum1, smallnum2;
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    smallnum1=fibonacci(n-1);
    smallnum2=fibonacci(n-2);
    return smallnum1+smallnum2;
}

int main(){
    int n;
    cout<<"Enter the n"<<endl;
    cin>>n;
    cout<<fibonacci(n)<<endl;
}
