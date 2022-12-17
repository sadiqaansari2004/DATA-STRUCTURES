// find and return the index of first occurrence of given integer x in the array.
#include<iostream>
using namespace std;

int index(int a[], int n, int x)
{   static int count=0;
    if(n==0)
        return -1;
    if((*a)==x)
        return count;
    count++;
    return index(a+1, n-1, x);
}
int main(){
    int a[20],n, i, x, k=-1;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter the search element:"<<endl;
    cin>>x;
    k=index(a, n, x);
    if(k>=0)
        cout<<"The first occurrence of "<<x<<" is at index "<<k<<endl;
    else
        cout<<x<<" is not present in the list"<<endl;
}
