
#include <iostream>
using namespace std;
int palindrome(int arr[],int n)
{
  for(int i=0;i<n/2;i++)
  {
      if(arr[i]!=arr[n-i-1])
      {   return -1;
          break;
      }
  }
  return 1;
}
int main()
{ 
  int n;
  cin>>n;
  int arr[n];
  
 for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  
  cout<<"the elements are"<<endl;
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" "<<endl;
  }
  cout<<"if 1 then palindroime else if -1 then not a palindrome"<<endl;
  cout<<palindrome(arr,n)<<endl;
}

