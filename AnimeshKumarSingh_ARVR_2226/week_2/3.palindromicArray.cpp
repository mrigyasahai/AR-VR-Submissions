//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int count = 0;
    	for(int i = 0 ; i < n ; i++)
    	{
    	    int sum = 0;
            int temp = a[i];
            while(temp>0)
            {
                int a = temp % 10;
                sum = sum * 10 + a;
                temp /= 10;
            }
            if(sum == a[i])
                count++;
    	}
    	if(count == n)
    	    return 1;
    	return 0;
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
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends