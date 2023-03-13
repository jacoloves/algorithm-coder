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

int N, M, A[200009], B[200009];
vector<int> G[200009];
int color[200009];

void dfs(int pos)
{
    for (int i : G[pos]) {
        if (color[i] == 0) {
            color[i] = 3 - color[pos];
            dfs(i);
        }
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    for (int i = 1; i <= N; i++) color[i] = 0;
    for (int i = 1; i <= N; i++) {
        if (color[i] == 0) {
            color[i] = 1;
            dfs(i);
        }
    }

    bool Answer = true;
    for (int i = 1; i <= M; i++) {
        if (color[A[i]] == color[B[i]]) Answer = false;
    }

    if (Answer == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
