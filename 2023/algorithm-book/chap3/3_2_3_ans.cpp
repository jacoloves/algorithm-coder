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

ll GCD(ll a, ll b)
{
    while (a >= 1 && b >= 1) {
        if (a < b)
            b = b % a;
        else
            a = a % b;
    }
    if (a >= 1) return a;
    return b;
}

ll LCM(ll a, ll b) { return (a / GCD(a, b)) * b; }

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i <= n; i++) {
        cin >> v[i];
    }

    ll r = LCM(v[0], v[1]);
    for (int i = 2; i < n; ++i) {
        r = LCM(r, v[i]);
    }

    cout << r << endl;

    return 0;
}
