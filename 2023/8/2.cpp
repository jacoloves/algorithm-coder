#include <iostream>      // cout, endl, cin
#include <string>        // string, to_string, stoi
#include <vector>        // vector
#include <algorithm>     // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility>       // pair, make_pair
#include <tuple>         // tuple, make_tuple
#include <cstdint>       // int64_t, int*_t
#include <cstdio>        // printf
#include <map>           // map
#include <queue>         // queue, priority_queue
#include <set>           // set
#include <stack>         // stack
#include <deque>         // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset>        // bitset
#include <cctype>        // isupper, islower, isdigit, toupper, tolower
#include <regex>         // regex
#include <cmath>

using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int merge(vector<int> *a, int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;
    vector<int> l(n1 + 1);
    vector<int> r(n2 + 1);
    rep(i, n1) l[i] = a->at(left + i);
    rep(i, n2) r[i] = a->at(mid + i);
    l[n1] = 1000000001;
    r[n2] = 1000000001;
    int i = 0;
    int j = 0;
    int cnt = 0;
    for (int k = left; k < right; ++k)
    {
        if (l[i] <= r[j])
        {
            a->at(k) = l[i];
            ++i;
        }
        else
        {
            a->at(k) = r[j];
            ++j;
        }
        ++cnt;
    }
    return cnt;
}

int mergeSort(vector<int> *a, int left, int right)
{
    int cnt = 0;
    if (left + 1 < right)
    {
        int mid = (left + right) / 2;
        cnt += mergeSort(a, left, mid);
        cnt += mergeSort(a, mid, right);
        cnt += merge(a, left, mid, right);
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    // alds_5_b
    int cnt = mergeSort(&a, 0, n);

    rep(i, n)
    {
        if (i)
        {
            cout << " ";
        }
        cout << a[i];
    }
    cout << endl;
    cout << cnt << endl;
    return 0;
}
