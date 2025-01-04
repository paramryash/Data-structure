#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cassert>
#include <string>
#include <climits>
#include <cstring>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
using namespace std;

pair<int, int> min_max(vector<int> &arr, int n)
{
    pair<int, int> ans;
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            ans.first = min;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            ans.second = max;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1000,11,445,1,330,3000};
    int n = arr.size();

    pair<int, int> ans = min_max(arr,n);

    cout << " minimum is:" << ans.first << endl;
    cout << " minimum is:" << ans.second << endl;

    return 0;
}