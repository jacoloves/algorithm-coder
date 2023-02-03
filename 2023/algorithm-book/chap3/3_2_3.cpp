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

ll gcd(ll a, ll b)
{
    while (a >= 1 && b >= 1) {
        if (a < b)
            b = b % a;
        else
            a = a % b;
    }
    if (a >= 1)
        return a;
    else
        return b;
}

ll lcm(ll a, ll gcd_num)
{
    ll n = a / gcd_num;

    return n;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    ll gcd_num = gcd(v[0], v[1]);
    ll mul = v[0] * v[1];
    ll ans = lcm(mul, gcd_num);
    for (int i = 2; i < n; ++i) {
        mul *= v[i];
        gcd_num = gcd(gcd_num, v[i]);
        ans = lcm(mul, gcd_num);
    }

    cout << ans << endl;

    return 0;
}
