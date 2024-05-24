#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,s;
    cin>>t;
    while (t--)
    {
        int flag=0;
        cin>>n>>s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                for (int k = j+1; k < n; k++)
                {
                    if(s==arr[i]+arr[j]+arr[k])
                    {
                        cout<<"YES"<<endl;
                        flag=1;
                        break;
                    }
                    
                }
                if(flag==1) break;
                
            }
            if(flag==1) break;
            
        }
        if(flag==0) cout<<"NO"<<endl;
        
        
    }
    
}