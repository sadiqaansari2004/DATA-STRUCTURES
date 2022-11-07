#include<iostream>
using namespace std;

bool is_sorted(int a[], int size){
    if(size==0 || size==1){
        return true;
    }
    if(a[0] > a[1]){
        return false;
    }
    bool isSmallerSorted= is_sorted(a+1, size-1); // recursive function 
    return isSmallerSorted;
}
int main(){
    int a[5];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    cout<<endl<<is_sorted(a , 5)<<endl;
}
