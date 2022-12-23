#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <regex> // regex
#include <cmath>

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    int w,h,n;
    cin >> w >> h >>n;
    vector<int> xv(n);
    vector<int> yv(n);
    vector<int> av(n);

    for (int i=0; i<n; ++i) {
        cin >> xv[i] >> yv[i] >> av[i];
    }

    int ans[w][h];
    for (int i=0; i<w; ++i) {
        for (int j=0; j<h; ++j) {
            ans[i][j] = 0;
        }
    }

    for (int i=0; i<n; ++i) {
        if (av[i] == 1) {
            for (int j=0; j<=xv[i]; ++j) {
                for (int k=0; k<h; ++k) {
                    ans[j][k] = 1;
                }
            }
        } else if (av[i] == 2) {
            for (int j=xv[i]; j<w; ++j) {
                for (int k=0; k<h; ++k) {
                    ans[j][k] = 1;
                }
            }
        } else if (av[i] == 3) {
            for (int j=0; j<w; ++j) {
                for (int k=0; k<=yv[i]; ++k) {
                    ans[j][k] = 1;
                }
            }
        } else if (av[i] == 4) {
            for (int j=0; j<w; ++j) {
                for (int k=yv[i]; k<h; ++k) {
                    ans[j][k] = 1;
                }
            }
        }
    }

    int cnt = 0;
    for (int i=0; i<w; ++i) {
        for (int j=0; j<h; ++j) {
            if (ans[i][j] == 0) cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}