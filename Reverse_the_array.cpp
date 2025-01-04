#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>
#include <string>
#include <climits>
#include <cstring>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
using namespace std;

void reverse_arr(vector<int> &arr, int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    int n = arr.size();

    reverse_arr(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
