// Calculate sum of array elements using recursion
#include<iostream>
using namespace std;

int sumofArray(int a[], int size){
    static int sum=0;
    while(size!=0){
        sum+=(*a);
        return sumofArray(a+1, size-1);
    }
    return sum;
}

int main(){
    int N, a[N];
    cout<<"Enter the size of array:"<<endl;
    cin>>N;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0; i<N; i++){
        cin>>a[i];
    }
    cout<<"The sum of the array elements is:"<<endl;
    cout<<sumofArray(a, N)<<endl;
}
