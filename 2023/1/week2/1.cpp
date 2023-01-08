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
    int h, w;
    cin >> h >> w;

    int cnt = 0;

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w - 1; ++j) {
            cnt++;
        }
    }
    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < h - 1; ++j) {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
