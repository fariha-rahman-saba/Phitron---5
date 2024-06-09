#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    string cls;
    string sec;
    string id;
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    Student arr[n],arr2[n];

    string info, word;

    for (int i = 0; i < n; i++)
    {
        getline(cin, info);
        stringstream ss(info);
        
        ss >> arr[i].name >> arr[i].cls >> arr[i].sec >> arr[i].id;
    }
    int m=n;

    for (int i = 0; i < n; i++)
    {
        arr2[i].name = arr[i].name;  
        arr2[i].cls = arr[i].cls;
        arr2[i].sec= arr[--m].sec;
        arr2[i].id=arr[i].id;
    }
    
    
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i].name << " " << arr2[i].cls << " " << arr2[i].sec << " " << arr2[i].id << endl;
    }

    return 0;
}