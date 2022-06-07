// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool IsPerfect(int arr[],int n)
    {  if(n==1)
        {
            return true;
        }
        
        int flag=0;
        
        for(int i=0;i<(int)n/2;i++)
        {
            if(arr[i]==arr[n-(i+1)])
              {
                  flag=1;
              }
            else
            {
                return false;
            }
        }
        if (flag==1)
        { return true;}
    }
};




// { Driver Code Starts.
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        if(ob.IsPerfect(a,n))
            cout<<"PERFECT\n";
        else
            cout<<"NOT PERFECT\n";
        
    }
    
}  // } Driver Code Ends