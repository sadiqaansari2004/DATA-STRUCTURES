// program to find last index of a given integer
#include<iostream>
using namespace std;

int index(int a[], int size, int x){
    static int count=0;
    if(size==0)
        return -1;
    if((*a)==x)
        count++;
    if(size==1)
        return count;
    return index(a+1, size-1, x);
}
int main(){
    int a[50], n, x, ind;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter the search element:"<<endl;
    cin>>x;
    ind=index(a, n, x);
    if(ind==-1)
        cout<<x<<" is not present in the list!!\n";
    else
        cout<<"The last index of "<<x<<" is "<<ind<<endl;
    return 0;
}
