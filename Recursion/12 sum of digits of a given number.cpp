// program to find sum of digits of a given number using recursion
#include<iostream>
using namespace std;

int digitsum(int n){
    static int sum=0;
    sum=sum+(n%10);
    if(n==0)
        return sum;
    return digitsum(n/10);
}
int main(){
    int num;
    cout<<"Enter any number"<<endl;
    cin>>num;
    cout<<"The sum of the digits of a given number is:"<<endl;
    cout<<digitsum(num)<<endl;
    return 0;
}
