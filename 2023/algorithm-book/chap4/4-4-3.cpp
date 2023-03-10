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

ll N;
ll F[10000009];
ll Answer = 0;

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++) F[i] = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) F[j] += 1;
    }

    for (int i = 1; i <= N; i++) {
        Answer += 1LL * i * F[i];
    }
    cout << Answer << endl;
    return 0;
}
