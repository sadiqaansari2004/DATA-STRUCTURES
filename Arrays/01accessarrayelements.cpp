#include<iostream>
using namespace std;

int main(){
    int a[5];
    cout<<"Enter the elements of an array:"<<endl;
    for(int i=0; i<5; i++){
        cin>>a[i];// taking input from the user
    }
    // accessing the elements of an array
    cout<<a[0]<<endl;
    cout<<*(a+1)<<endl;
    cout<<2[a]<<endl;
    cout<<3[a]<<endl;
    cout<<a[4]<<endl;
    return 0;
}
