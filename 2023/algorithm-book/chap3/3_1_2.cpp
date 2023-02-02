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
    ll n;
    cin >> n;
    vector<ll> v;

    ll tmp_n = n;
    for (ll i = 2; i <= n; ++i) {
        bool flg = true;
        for (ll j = 2; j * j <= i; j++) {
            if (i % j == 0) flg = false;
        }

        if (flg) {
            while (true) {
                if (tmp_n % i != 0) break;
                v.push_back(i);
                tmp_n /= i;
            }
        }
    }

    for (auto e : v) {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}
