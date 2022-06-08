// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	bool fascinating(int n) {
    	
    	int m_to=n*2;
        int m_th=n*3;
        string s=to_string(n);
        s+=to_string(m_to);
        s+=to_string(m_th);
        sort(s.begin(),s.end());
        if(s=="123456789"){
            return true;
        }
        return false;
}
	
	
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}  // } Driver Code Ends