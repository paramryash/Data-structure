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

void sort012(vector<int> &arr, int n)
{
    int zero = 0, one = 0, two = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == 1)
        {
            one++;
        }
        else if (arr[i] == 2)
        {
            two++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (zero != 0)
        {
            arr[i] = 0;
            zero--;
        }
        else if (one != 0)
        {
            arr[i] = 1;
            one--;
        }
        else if (two != 0)
        {
            arr[i] = 2;
            two--;
        }
    }
}

int main()
{
    vector<int> arr = {2, 1, 0, 2, 0, 2, 1, 1, 2};

    int n = arr.size();

    sort012(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
