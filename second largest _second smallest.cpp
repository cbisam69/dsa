second largest and second smallest
vector<int> getSecondOrderElements(int n, vector<int> a) {
   vector<int>b;
   
   sort(a.begin(),a.end());
   int largest=a[n-1];
   int secondlargest=0;
   for(int i=n-2;i>=0;i--)
   {
       if (a[i] != largest) {
           secondlargest = a[i];
           break;
       }
   }
   b.push_back(secondlargest);
   int smallest=a[0];
  
   int secondsmallest=0;
   for(int i=1;i<n;i++)
   {
       if (a[i] != smallest) {

           secondsmallest = a[i];
           break;
       }
   }
   b.push_back(secondsmallest);
   return b;
}
