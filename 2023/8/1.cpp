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

bool check(int k, int n, int sum, vector<int> *a)
{
    if (sum == 0)
    {
        return true;
    }
    if (k >= n)
    {
        return false;
    }
    bool res = check(k + 1, n, sum, a) || check(k + 1, n, sum - a->at(k), a);
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int q;
    cin >> q;
    vector<int> b(q);
    rep(i, q) cin >> b[i];

    for (int i = 0; i < q; ++i)
    {
        if (check(0, n, b[i], &a))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
