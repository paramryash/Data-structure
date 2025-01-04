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

int Kth_small_element(vector<int> &arr, int k)
{

    sort(arr.begin(), arr.end());

    return arr[k - 1];
}

int main()
{
    vector<int> arr = {45, 43, 3, 456, 676, 3, 566, 66};
    int n = arr.size();

    int element;
    cout << "Enter the element position (K): ";
    cin >> element;

    cout << "th smallest element is: " << Kth_small_element(arr, element) << endl;
}