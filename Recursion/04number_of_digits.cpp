#include<iostream>
using namespace std;

int func(int n){
    static int counter=0;// static assigns value one time
    while(n!=0){
        counter++;
        return func(n/10);// n/10 is used to remove last digit
    }
    return counter;
}
int main(){
    int n, count;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    count=func(n);
    cout<<count<<endl;
}
