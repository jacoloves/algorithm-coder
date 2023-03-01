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

ll N, W, w[109], v[109];
ll dp[109][100009];
int main()
{
    cin >> N >> W;
    for (int i = 1; i <= N; i++) cin >> w[i] >> v[i];

    dp[0][0] = 0;
    for (int i = 1; i <= W; i++) dp[0][i] = -(1LL << 60);

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= W; j++) {
            if (j < w[i]) dp[i][j] = dp[i - 1][j];
            if (j >= w[i])
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
        }
    }

    ll Answer = 0;
    for (int i = 0; i <= W; i++) Answer = max(Answer, dp[N][i]);
    cout << Answer << endl;
    return 0;
}
