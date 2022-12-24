// program to find last index of a given number
#include<iostream>
using namespace std;

int lastindex(int a[], int size, int x){
    if(size==0)
        return -1;
    if(a[size]==x)
        return size;
    return lastindex(a, size-1, x);
}
int main(){
    int n, a[n],x, ans;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0; i<n;i++){
        scanf("%d", &a[i]);
    }
    cout<<"Enter the search element:"<<endl;
    cin>>x;
    ans=lastindex(a, n, x);
    if(ans==-1)
        cout<<x<<" is not present in the list"<<endl;
    else
        cout<<"The last index of "<<x<<" is "<<ans<<endl;
    return 0;
}
