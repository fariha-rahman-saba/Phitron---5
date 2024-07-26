#include <bits/stdc++.h>
using namespace std;

int arr[100];

void push(int val,int arr[])
{
    int i=0;
    while (true)
    {
        if (arr[i]==-1)
        {
            arr[i]=val;
            break;
        }
        else
        {
            i++;

        }
        
    }
    
}

void pop()
{
    int i=0;
    while (true)
    {
        if (arr[i+1]==-1)
        {
            arr[i]=-1;
            break;
        }
        else
        {
            i++;

        }
        
    }

}

int top()
{
    int i=0;
    while (true)
    {
        if (arr[i+1]==-1)
        {
            return arr[i];
        }
        else
        {
            i++;

        }
        
    }
}

bool empty()
{
    int i=0;
    while (true)
    {
        if (arr[i]==-1)
        {
            break;
        }
        else
        {
            i++;

        }
        
    }
    if (i==0)
    {
        return true;
    }
    else return false;
    
}

int main()
{
    int ele;

    for (int i = 0; i < 100; i++)
    {
        arr[i]=-1;
    }
    

    while (true)
    {
        cin >> ele;
        if (ele == -1)
        {
            break;
        }
        else
        {
            push(ele,arr);
        }
    }
    while (!empty())
    {
        cout<<top()<<" ";
        pop();
    }

    return 0;
}