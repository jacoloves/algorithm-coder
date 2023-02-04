#include <algorithm>  // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <atcoder/all>
#include <bitset>  // bitset
#include <cctype>  // isupper, islower, isdigit, toupper, tolower
#include <cmath>
#include <cstdint>        // int64_t, int*_t
#include <cstdio>         // printf
#include <deque>          // deque
#include <iostream>       // cout, endl, cin
#include <map>            // map
#include <queue>          // queue, priority_queue
#include <regex>          // regex
#include <set>            // set
#include <stack>          // stack
#include <string>         // string, to_string, stoi
#include <tuple>          // tuple, make_tuple
#include <unordered_map>  // unordered_map
#include <unordered_set>  // unordered_set
#include <utility>        // pair, make_pair
#include <vector>         // vector

using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main()
{
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    map<int, int> mp2;

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b]++;
    }

    for (auto e : mp) {
        mp2[e.second]++;
    }

    int cnt = 0;
    for (auto e : mp2) {
        if (e.first != 1) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
