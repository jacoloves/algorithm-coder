#include <algorithm>  // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <atcoder/all>
#include <atcoder/dsu.hpp>
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

bool solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> deg(n);
    atcoder::dsu uf(n);
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        deg[a]++;
        deg[b]++;
        uf.merge(a, b);
    }

    int one = 0;
    for (int i = 0; i < n; ++i) {
        if (deg[i] == 0 || deg[i] > 2) return false;
        if (deg[i] == 1) one++;
    }

    if (one != 2) return false;

    if (uf.size(0) != 0) return false;
    return true;
}

int main()
{
    if (solve())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
