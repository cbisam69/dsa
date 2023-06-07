#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int arr[6]={100,9,11,2,1,99};
    int largest=INT_MIN;
    for(int i=0;i<6;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<largest;
}
