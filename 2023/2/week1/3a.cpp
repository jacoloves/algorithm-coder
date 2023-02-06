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

struct Edge {
    int to;
};
using Graph = vector<vector<Edge>>;
// 深さ優先探索
vector<bool> seen;  // 探索したか記録
void dfs(const Graph &G, int v)
{
    seen[v] = true;
    for (auto e : G[v]) {
        if (!seen[e.to]) {  // 訪問済みでなければ探索
            dfs(G, e.to);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    Graph G(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back({b});
        G[b].push_back({a});
    }
    cout << "test" << endl;
    seen.assign(n, false);  // 初期化
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (!seen[i]) {
            dfs(G, i);
            cnt++;  // dfsした回数をカウント
        }
    }
    cout << cnt << endl;
    return 0;
}
