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
    int N, M;
    cin >> N >> M;
    vector<vector<int>> g;
    g.resize(N);
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        --u, --v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int ans = 0;
    vector<int> vis;
    vis.resize(N);
    queue<int> Q;
    for (int i = 0; i < N; i++) {
        if (vis[i]) continue;
        ans++, vis[i] = true;
        Q.push(i);
        while (!Q.empty()) {
            int c = Q.front();
            Q.pop();
            for (auto& d : g[c]) {
                if (vis[d]) continue;
                vis[d] = true, Q.push(d);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
