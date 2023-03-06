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

int N, M;
int A[200009], B[200009], S[200009];

int main()
{
    cin >> N;
    for (int i = 1; i <= N - 1; i++) cin >> A[i];
    cin >> M;
    for (int i = 1; i <= M; i++) cin >> B[i];

    S[1] = 0;
    for (int i = 2; i <= N; i++) S[i] = S[i - 1] + A[i - 1];

    ll Answer = 0;
    for (int i = 1; i <= M - 1; i++) {
        if (B[i] < B[i + 1]) {
            Answer += (S[B[i + 1]] - S[B[i]]);
        }
        else {
            Answer += (S[B[i]] - S[B[i + 1]]);
        }
    }

    cout << Answer << endl;
    return 0;
}
