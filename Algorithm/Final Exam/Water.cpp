#include <bits/stdc++.h>
using namespace std;

pair<int, int> maxWaterContainer(vector<int>& heights) {
    int left = 0, right = heights.size() - 1;
    int maxArea = 0;
    pair<int, int> result;

    while (left < right) {
        int height = min(heights[left], heights[right]);
        int width = right - left;
        int area = height * width;

        if (area > maxArea) {
            maxArea = area;
            result = {left, right};
        }

        if (heights[left] < heights[right]) {
            left++;
        } else {
            right--;
        }
    }
    
    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> heights(n);
        
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }

        pair<int, int> indices = maxWaterContainer(heights);
        cout << indices.first << " " << indices.second << endl;
    }

    return 0;
}
