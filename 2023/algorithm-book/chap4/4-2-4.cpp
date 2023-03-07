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

int N, T;
int L[500009], R[500009];
int A[500009], B[500009];

int main()
{
    cin >> T >> N;
    for (int i = 1; i <= N; i++) cin >> L[i] >> R[i];

    for (int i = 0; i <= T; i++) B[i] = 0;

    for (int i = 1; i <= N; i++) {
        B[L[i]] += 1;
        B[R[i]] -= 1;
    }

    A[0] = B[0];
    for (int i = 1; i <= T; i++) {
        A[i] = A[i - 1] + B[i];
    }

    for (int i = 0; i < T; i++) cout << A[i] << endl;

    return 0;
}
