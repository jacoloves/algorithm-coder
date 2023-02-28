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

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int x = 0, y = 0;
    set<P> st;
    st.emplace(x, y);

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'L') x--;
        if (s[i] == 'R') x++;
        if (s[i] == 'D') y--;
        if (s[i] == 'U') y++;
        st.emplace(x, y);
    }

    if (st.size() == n + 1)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}
