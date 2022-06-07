// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int check(int num)
    {  int temp=num;
       int num2=0;
       while(temp!=0)
       {
           num2=num2*10+(temp%10);
           temp=temp/10;
       }
       
       if (num==num2)
          {return 1;}
       else
          {return 0;}
    }
    
    int PalinArray(int arr[], int n)
    {
    	for(int i=0;i<n;i++)
    	{   if (!check(arr[i]))
    	       {return 0;}
    	}
 return 1;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends