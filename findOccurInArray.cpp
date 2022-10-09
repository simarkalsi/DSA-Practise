#include <iostream>
using namespace std;

int findFromFirst(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }


    if (arr[i] == key)
    {
        return i;
    }
    return findFromFirst(arr,n,i+1,key);
}

int findFromLast(int arr[],int n,int i,int key){
      if (i == n)
    {
        return -1;
    }
    int prev=findFromLast(arr,n,i+1,key);

    if (prev!=-1)
    {
            return prev;
    }
    if (arr[i]==key)
    {
        return i;

    }
    return -1;
    
    
}
int main()
{
    
    int arr[] = {1, 2, 3, 2, 3, 2};
    
    cout<<findFromFirst(arr, 6,0, 2)<<endl;
    cout<<findFromLast(arr, 6,0, 2);
    return 0;
}