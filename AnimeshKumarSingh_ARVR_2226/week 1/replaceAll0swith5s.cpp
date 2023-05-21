//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
    int sum = 0;
    while(n>0)
    {
        int a = n % 10;
        if(a==0)
            sum = sum * 10 + 5;
        else
            sum = sum * 10 + a;
        n /= 10;
    }
    n = sum;
    sum = 0;
    while(n>0)
    {
        int a = n % 10;
        sum = sum * 10 + a;
        n /= 10;
    }
    return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends