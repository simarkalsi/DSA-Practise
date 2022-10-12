#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int num;
    cout<<"Enter the number you want to find"<<endl;
    cin>>num;

    for (int i = 0; i < n; i++)
    {
        if (num==array[i])
        {
            cout<<"the index for element is "<<i+1<<endl;
            break;
        }
        
    }
    
    
return 0;
}