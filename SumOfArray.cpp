#include<iostream>
using namespace std;

int main()
{
    
  int first[20], second[20], sum[20], c, n,m;
 
  cout << "Enter the number of elements in the array ";
  cin >> n;

  cout << "Enter elements of first array" << endl;

  for (c = 0; c < n; c++)
    cin >> first[c];
    cout << "Enter the number of elements in the array ";
  cin >> m;

  cout << "Enter elements of second array" << endl;

  for (c = 0; c < m; c++)
    cin >> second[c];

int k;
    if (m>n)
    {
        k=m;
    }
    else{
        k=n;
    }
    


  cout << "Sum of elements of the arrays:" << endl;

  for (c = 0; c < k; c++) {
    sum[c] = first[c] + second[c];
    cout << sum[c] << endl;
  }
  
return 0;
}