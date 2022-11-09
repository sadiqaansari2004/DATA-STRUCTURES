//check number recursively
#include<iostream>
using namespace std;

bool check(int a[], int size, int x){
    if(size==0){
        return false;
    }
    if((*a)==x){
        return true;
    }
    return check(a+1, size-1, x);
    
}
int main(){
    int n, a[n], x;
    cout<<"Enter the array size:"<<endl;
    cin>>n;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"Enter the search element:"<<endl;
    cin>>x;
    cout<<check(a, n, x)<<endl;
    
}
