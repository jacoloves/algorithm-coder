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

int main()
{
    int N;
    cin >> N;
    string a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        if (a[i] == b[i] && b[i] == c[i])
            ans += 0;
        else if (a[i] == b[i] || b[i] == c[i] || c[i] == a[i])
            ans += 1;
        else
            ans += 2;
    }

    cout << ans << endl;
    return 0;
}
