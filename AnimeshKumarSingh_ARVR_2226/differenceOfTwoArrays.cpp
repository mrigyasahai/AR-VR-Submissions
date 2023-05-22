#include<iostream>
using namespace std;

int main()
{
    int n1;
    cin >> n1;
    int a1[n1];
    for(int i = 0 ; i < n1 ; i++)
    {
        cin >> a1[i];
    }
    
    int n2;
    cin >> n2;
    int a2[n2];
    for(int i = 0 ; i < n2 ; i++)
    {
        cin >> a2[i];
    }
    
    int ans[n2];
    int c = 0;
    int i = n1 - 1;
    int j = n2 - 1;
    int k = n2 - 1;
    
    while(k >= 0)
    {
        int diff = 0;
        int a1v = i >= 0 ? a1[i] : 0;
        if(a2[j] + c >= a1v)
        {
            diff = a2[j] + c - a1v;
            c = 0;
        }
        else
        {
            diff = a2[j] + c + 10 - a1v;
            c = -1;
        }
        ans[k] = diff;
        
        i--;
        j--;
        k--;
    }
    
    int idx = 0;
    while(idx < n2)
    {
        if(ans[idx] == 0)
            idx++;
        else
            break;
    }
    
    while(idx < n2)
    {
        cout << ans[idx] << endl;
        idx++;
    }
    return 0;
}