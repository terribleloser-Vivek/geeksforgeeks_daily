// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int numberOfPossibleTimings(string S){
         /*Number of ways 0,1,2,3,4,5,6,7,8,9 can be represented*/
         int arr[]={2,7,2,3,3,4,2,5,1,2};
         int a =arr[S[0]-'0'];
         int b =arr[S[1]-'0'];
         
         return a*b;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S ;
        Solution ob;
        cout << ob.numberOfPossibleTimings(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends