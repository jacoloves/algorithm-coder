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
    int N;
    cin >> N;
    string a, b, c;
    cin >> a >> b >> c;

    vector<vector<bool>> vv(3, vector<bool>(N));

    for (int i = 0; i < N; ++i) {
        if (a[i] != b[i] && b[i] != c[i] && c[i] != a[i]) {
            vv[0][i] = 1;
            vv[1][i] = 1;
            vv[2][i] = 1;
        }
        else if (a[i] == b[i] && b[i] != c[i]) {
            vv[2][i] = 1;
        }
        else if (a[i] == c[i] && a[i] != b[i]) {
            vv[1][i] = 1;
        }
        else if (b[i] == c[i] && a[i] != c[i]) {
            vv[0][i] = 1;
        }
    }

    int cnt = 0;
    vector<int> vcnts;
    int vcnt = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < N; ++j) {
            if (vv[i][j]) cnt++;
            if (!vv[i][j]) vcnt++;
        }
        vcnts.push_back(vcnt);
        vcnt = 0;
    }

    int max_vcnt = *max_element(vcnts.begin(), vcnts.end());

    if (max_vcnt >= cnt) {
        cout << cnt << endl;
    }
    else {
        cout << cnt - (N - max_vcnt) << endl;
    }

    return 0;
}
