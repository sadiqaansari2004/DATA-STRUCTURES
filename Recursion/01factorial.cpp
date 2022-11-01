#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0)
        return 1;
    return n*factorial(n-1);// recursive function
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    int output=factorial(n);// function call
    cout<<"The factorail of "<<n<<" is:"<<endl;
    cout<<output<<endl;
}
