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

int H, W;
int sx, sy, start;
int gx, gy, goal;
char c[59][59];

int dist[2509];
vector<int> G[2509];

int main()
{
    cin >> H >> W;
    cin >> sx >> sy;
    start = sx * W + sy;
    cin >> gx >> gy;
    goal = gx * W + gy;

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) cin >> c[i][j];
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W - 1; j++) {
            int idx1 = i * W + j;
            int idx2 = i * W + (j + 1);
            if (c[i][j] == '.' && c[i][j + 1] == '.') {
                G[idx1].push_back(idx2);
                G[idx2].push_back(idx1);
            }
        }
    }

    for (int i = 1; i <= H - 1; i++) {
        for (int j = 1; j <= W; j++) {
            int idx1 = i * W + j;
            int idx2 = (i + 1) * W + j;
            if (c[i][j] == '.' && c[i + 1][j] == '.') {
                G[idx1].push_back(idx2);
                G[idx2].push_back(idx1);
            }
        }
    }

    for (int i = 1; i <= H * W; i++) dist[i] = -1;
    queue<int> Q;
    Q.push(start);
    dist[start] = 0;

    while (!Q.empty()) {
        int pos = Q.front();
        Q.pop();
        for (int i = 0; i < (int)G[pos].size(); i++) {
            int nex = G[pos][i];
            if (dist[nex] == -1) {
                dist[nex] = dist[pos] + 1;
                Q.push(nex);
            }
        }
    }

    cout << dist[goal] << endl;
    return 0;
}
