#include <algorithm>  // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <bitset>     // bitset
#include <cctype>     // isupper, islower, isdigit, toupper, tolower
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
    ll t;
    cin >> t;
    vector<pair<ll, ll>> v(t);

    for (ll i = 0; i < t; ++i) {
        cin >> v[i].first >> v[i].second;
    }

    vector<ll> ans;
    for (ll i = 0; i < t; ++i) {
        ll cnt = 0;
        for (ll j = v[i].first; j <= v[i].second; ++j) {
            for (ll k = v[i].first; k <= v[i].second; ++k) {
                if (j - k >= v[i].first) cnt++;
            }
        }
        ans.push_back(cnt);
    }

    for (auto e : ans) {
        cout << e << endl;
    }
    return 0;
}
