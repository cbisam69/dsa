
Given a list of names, display the longest name.


Example:

Input:
N = 5
names[] = { "Geek", "Geeks", "Geeksfor",
  "GeeksforGeek", "GeeksforGeeks" }

Output:
GeeksforGeeks



class Solution{
    public:
    string longest(string names[], int n)
    {   int v[n];
         
        for(int i=0;i<n;i++)
        {
            
            v[i]=names[i].length();
        }
        
       int max=v[0];
       int index=0;
       for(int i=0;i<n;i++)
       {
           if(max<v[i])
           {
               max=v[i];
               index=i;
               
           }
       }
       return names[index];
      
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string names[n];
		
		for(int i=0;i<n;i++)
			cin>>names[i];
		Solution ob;
		cout<< ob.longest(names, n) << endl;
	}
}

// } Driver Code Ends




/////or
class Solution{
    public:
    string longest(string names[], int n)
    {  
        string num=names[0];
        for(int i=0;i<n;i++)
        {
            if(num.length()<names[i].length())
            {
                num=names[i];
            }
        }
         return num;
    }
    
   
};
