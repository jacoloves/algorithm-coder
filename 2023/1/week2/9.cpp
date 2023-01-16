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

ll ans_calcurate(ll n)
{
    ll perm = 1;
    for (int i = n; i > n - 2; --i) {
        perm *= i;
    }
    return perm / 2;
}

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    ll cnt = 0;
    ll conb = 0;
    for (int i = 0; i < str.size() - 1; ++i) {
        if (str[i] == str[i + 1]) {
            cnt++;
        }
        else {
            if (cnt > 0) {
                conb += ans_calcurate(cnt + 1);
                cnt = 0;
            }
        }
    }

    if (cnt > 0) {
        conb += ans_calcurate(cnt + 1);
    }

    cout << conb << endl;
    return 0;
}
