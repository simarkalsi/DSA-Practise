#include<iostream>
using namespace std;

int main()
{
    int n;
    int array[n];
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int sum=0;
    for (int j = 0; j < n; j++)
    {
        sum+=array[j];
    }
    cout<<sum;
    
    
return 0;
}