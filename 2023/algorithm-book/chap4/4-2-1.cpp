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

int N, A[100009], B[100009];
int Q, L[100009], R[100009];

int main()
{
    cin >> N >> Q;
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int j = 1; j <= Q; j++) cin >> L[j] >> R[j];
    B[0] = 0;
    for (int i = 1; i <= N; i++) B[i] = B[i - 1] + A[i];

    for (int j = 1; j <= Q; j++) cout << B[R[j]] - B[L[j] - 1] << endl;
    return 0;
}
