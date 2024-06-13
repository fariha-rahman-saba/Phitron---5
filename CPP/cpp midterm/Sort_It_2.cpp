#include <iostream>
#include <algorithm>
using namespace std;

int* sort_it(int n)
{
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n,greater<int>());
    return arr;
    
}

int main()
{
    int n;
    cin>>n;
    
    int *srtarr= sort_it(n);
    for (int i = 0; i < n; i++)
    {
        cout<<srtarr[i]<<" ";
    }
    cout<<endl;

    delete[] srtarr;
    
    
}