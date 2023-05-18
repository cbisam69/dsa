Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

Example 1:

Input:
N = 5
A[] = {1,2,3,5}
Output: 4
Example 2:

Input:
N = 10
A[] = {6,1,2,8,3,4,7,10,5}
Output: 9
  
#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cout<<"enter the size "<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    
    int size= sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    //sorting a vector(arr.begin,arr.end())
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=(i+1))
        {
            cout<<i+1;
            break;
        }
    }
    
}
