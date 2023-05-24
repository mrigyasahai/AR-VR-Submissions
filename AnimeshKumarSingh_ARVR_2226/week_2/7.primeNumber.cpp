#include <iostream>
using namespace std;

bool isprime(int n)
{
    if(n == 1 || n == 0)
    {
        return false;
    }
    int count = 0;
    for(int i = 2 ; i < n ; i++)
    {
        if(n % i == 0)
            count++;
    }
    if(count == 0)
        return true;
    return false;
}

int main(int argc, char **argv){
    int t;
    cin >> t;

    //write your code here
    while(t--)
    {
        int n;
        cin >> n;
        if(isprime(n))
            cout << "prime" << endl;
        else
            cout << "not prime" << endl;
    }
    
}