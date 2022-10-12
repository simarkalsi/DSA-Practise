#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the elements of array"<<endl;
    for (int i = 0; i<n; i++)
    {
        cin>>array[i];
    }
    int start=0, end=n-1;
    while (start<end)
    {
        int temp=array[end];
        array[end]=array[start];
        array[start]=temp;
        start++;
        end--;

    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<endl;
    }
    
    
    
    
    
return 0;
}