#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int heights[n];
        int first_max = 0;
        int second_max = 0;
        int first_idx = 0;
        int second_idx = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> heights[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (heights[i] > first_max)
            {
                first_max = heights[i];
                first_idx = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (heights[i] > second_max && heights[i] <= first_max && i!=first_idx)
            {
                second_max = heights[i];
                second_idx = i;
            }
        }
        if(first_idx>second_idx) cout<< second_idx<<" "<<first_idx<<endl;
        else cout << first_idx << " " << second_idx << endl;
    }
}
