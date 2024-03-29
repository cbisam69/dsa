Given an sorted array A of size N. Find number of elements which are less than or equal to given element X.

 

Example 1:

Input:
N = 6
A[] = {1, 2, 4, 5, 8, 10}
X = 9
Output:
5


  #include <bits/stdc++.h>
using namespace std;

int countOfElements(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        cin >> x;

        cout << countOfElements(arr, n, x) << endl;
    }
    return 0;
}
// } Driver Code Ends


int countOfElements(int arr[], int n, int x) 
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=x)
        {
            count++;
        }
    }
    return count;
}
