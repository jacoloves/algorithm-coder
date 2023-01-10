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
    int n, a, b;
    cin >> n >> a >> b;
    int bn;
    bn = b * n;

    bool black_white = true;
    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= a; ++i) {
            for (int j = 1; j <= bn; ++j) {
                if (black_white)
                    cout << '.';
                else
                    cout << '#';
                if (j % b == 0) {
                    black_white = !(black_white);
                }
            }
            cout << endl;
        }
        black_white = !(black_white);
    }
    return 0;
}
