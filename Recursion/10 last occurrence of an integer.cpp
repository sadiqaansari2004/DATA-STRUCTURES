// program to find last occurance index of given integer
#include<iostream>
using namespace std;

int last_index(int a[], int size, int key)
{
    static int count=size-1;
    if(size==0)
    return -1;
    if(a[size-1]==key)
    return count;
    count--;
    return last_index(a, size-1, key);
}
int main()
{
    int a[40], n, key;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"Enter the integer to be searched:"<<endl;
    cin>>key;
    int output=last_index(a, n, key);
    if(output>=0)
    cout<<key<<"'s last occurance is at index "<<output<<endl;
    else
    cout<<key<<" is not present in the array"<<endl;
}
