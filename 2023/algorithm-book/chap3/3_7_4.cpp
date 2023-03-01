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

int N, S, A[69];
bool dp[69][10009];

int main()
{
    cin >> N >> S;
    for (int i = 1; i <= N; i++) cin >> A[i];

    dp[0][0] = true;
    for (int i = 1; i <= S; i++) dp[0][i] = false;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= S; j++) {
            if (j < A[i]) dp[i][j] = dp[i - 1][j];
            if (j >= A[i]) {
                if (dp[i - 1][j] == true || dp[i - 1][j - A[i]] == true)
                    dp[i][j] = true;
                else
                    dp[i][j] = false;
            }
        }
    }

    if (dp[N][S] == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
