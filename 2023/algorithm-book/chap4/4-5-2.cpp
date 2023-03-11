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

int N, M, A[100009], B[100009];
vector<int> G[100009];
bool visited[100009];

void dfs(int pos)
{
    visited[pos] = true;
    for (int i : G[pos]) {
        if (visited[i] == false) dfs(i);
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

    dfs(1);

    bool Answer = true;
    for (int i = 1; i <= N; i++) {
        if (visited[i] == false) Answer = false;
    }
    if (Answer == true)
        cout << "The graph is connected." << endl;
    else
        cout << "The graph is not connected." << endl;
    return 0;
}
