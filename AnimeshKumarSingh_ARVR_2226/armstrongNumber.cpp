//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int temp = n;
        int sum = 0;
        while(n > 0)
        {
            int a = n % 10;
            sum += a * a * a;
            n /= 10;
        }
        string ans;
        if(temp == sum)
            ans = "Yes";
        else
            ans = "No";
    
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends