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

long sum(const long &a, const long &b) { return (a + b) * (b - a + 1) / 2; }

int main()
{
    int T;
    cin >> T;
    while (T--) {
        long L, R;
        cin >> L >> R;
        const long minC = L;
        const long maxC = R - L;
        if (minC > maxC) {
            cout << 0 << endl;
        }
        else {
            cout << sum(R - maxC - L + 1, R - minC - L + 1) << endl;
        }
    }
    return 0;
}
