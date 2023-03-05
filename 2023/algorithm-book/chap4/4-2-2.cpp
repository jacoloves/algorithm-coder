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

int N, B[100009];
int Q, L[100009], R[100009], X[100009];

int main()
{
    cin >> N >> Q;
    for (int i = 1; i <= Q; i++) {
        cin >> L[i] >> R[i] >> X[i];
        B[L[i]] += X[i];
        B[R[i] + 1] -= X[i];
    }

    for (int i = 2; i <= N; i++) {
        if (B[i] > 0) cout << "<";
        if (B[i] == 0) cout << "=";
        if (B[i] < 0) cout << ">";
    }

    cout << endl;
    return 0;
}
