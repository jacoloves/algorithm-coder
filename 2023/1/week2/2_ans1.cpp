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
    int N, A, B;
    cin >> N >> A >> B;

    vector<string> tiles(N, string(N, '-'));
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < N; j++) {
                if (j % 2 == 0)
                    tiles[i][j] = '.';
                else
                    tiles[i][j] = '#';
            }
        }
        else {
            for (int j = 0; j < N; j++) {
                if (j % 2 == 0)
                    tiles[i][j] = '#';
                else
                    tiles[i][j] = '.';
            }
        }
    }

    vector<string> X(A * N, string(B * N, '-'));
    for (int i = 0; i < A * N; i++) {
        for (int j = 0; j < B * N; j++) {
            X[i][j] = tiles[i / A][j / B];
        }
    }

    for (int i = 0; i < A * N; i++) {
        cout << X[i] << endl;
    }
    return 0;
}
