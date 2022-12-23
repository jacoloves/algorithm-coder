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
    int w, h, n;
    cin >> w >> h >> n;

    int x,y,a;
    int xl=0, xr=w, yl=0, yu=h;

    for (int i=0; i<n; ++i) {
        cin >> x >> y >> a;
        if (a == 1) {
            if (xl<x) {
                xl = x;
            }
        } else if (a == 2) {
            if (x<xr) {
                xr = x;
            }
        } else if (a == 3) {
            if (yl<y) {
                yl = y;
            }
        } else {
            if (y<yu) {
                yu = y;
            }
        }
    }
    if (xr>xl && yu>yl) {
        cout << (xr-xl)*(yu-yl) << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}