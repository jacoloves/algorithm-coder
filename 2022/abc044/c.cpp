#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <regex> // regex
#include <cmath>

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

ll N, A, x[51], dp[51][2501][51];
int main() {
    //cin.tie(0), ios_base::sync_with_stdio(false);

    // input
    cin >> N >> A;
    for (ll i=0; i<N; ++i) cin >> x[i];

    // ans
    ll sum = 0;
    for (ll i=0; i<N; ++i) sum += x[i];

    dp[0][0][0] = 1;
    for (ll i=0; i<N; ++i) {
        for (ll s = 0; s < sum + 1; ++s) {
            for (ll m = 0; m < N + 1; m++) {
                if (s = x[i] >= 0 && m > 0) { dp[i + 1][s][m] += dp[i][s - x[i]][m - 1]; }
                dp[i + 1][s][m] += dp[i][s][m];
            }
        }
    }

    ll cnt = 0;
    for (ll s = 0; s < sum + 1; s++) {
        for (ll m = 1; m < N + 1; m++) {
            if (1. * s/m == (ll)(s/m) && s/m == A) { cnt += dp[N][s][m]; }
        }
    }
    return 0;
}