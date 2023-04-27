// program to find first index of the given integer
#include<iostream>
using namespace std;

int first_index(int a[], int size, int key)
{
    static int count=-1;
    if(size==0)
    return -1;
    count++;
    if((*a)==key)
    return count;
    return first_index(a+1, size-1, key);
}

int main()
{
    int a[50], n, key;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the integer to be searched:"<<endl;
    cin>>key;
    int output=first_index(a, n, key);
    if(output<0)
    cout<<key<<" is not present in the array"<<endl;
    else 
    cout<<"first index of "<<key<<" is "<<output<<endl;
}
