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

const ll mod = 1000000007;
ll X, Y;
ll fact[200009];

ll modpow(ll a, ll b, ll m)
{
    ll p = a, Answer = 1;
    for (int i = 0; i < 30; i++) {
        if ((b & (1 << i)) != 0) {
            Answer *= p;
            Answer %= m;
        }
        p *= p;
        p %= m;
    }
    return Answer;
}

ll Division(ll a, ll b, ll m) { return (a * modpow(b, m - 2, m)) % m; }

ll ncr(int n, int r)
{
    return Division(fact[n], fact[r] * fact[n - r] % mod, mod);
}

int main()
{
    fact[0] = 1;
    for (int i = 1; i <= 200000; i++) fact[i] = 1LL * i * fact[i - 1] % mod;

    cin >> X >> Y;
    cout << ncr(X + Y, Y) << endl;
    return 0;
}
