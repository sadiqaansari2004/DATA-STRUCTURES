// program to store all indices of an integer in an array and print the size of that array recursively
#include<iostream>
using namespace std;

int indices(int a[], int size, int key, int output[])
{
    static int count=-1, outputlength=0;
    if(size==0)
    return -1;
    count++;
    if((*a)==key)
    {
        (*output)==count;
        outputlength++;
    }
    indices(a+1, size-1, key, output+1);
    return outputlength;
}
int main()
{
    int a[50], n, key, output[50];
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<n; i++)
    cin>>a[i];
    cout<<"Enter the integer to be searched:"<<endl;
    cin>>key;
    int x=indices(a, n, key, output);
    if(x==-1)
    cout<<key<<" is not present in the array"<<endl;
    else
    cout<<"The size of the output array is "<<x<<endl;
}
