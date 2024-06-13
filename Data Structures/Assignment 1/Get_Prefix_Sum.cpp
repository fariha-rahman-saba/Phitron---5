#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    long long int prefarr[n];
    prefarr[0]=arr[0];
    for (int i = 1; i < n; i++)
    {
        prefarr[i]=prefarr[i-1]+arr[i];
    }
    for (int i = n-1; i >=0; i--)
    {
        cout<<prefarr[i]<<" ";
    }
    
    
    
    



    return 0;
}