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
    int n;
    cin >> n;

    vector<int> r;

    rep(i,n) {
        int a;
        cin >> a;
        r.push_back(a);
    }

    int minv = r[0];
    int maxv = -1000000009;

    for(int j=1; j<n; ++j) {
        maxv = max(maxv, r[j]-minv);
        minv = min(minv, r[j]);
    }

    cout << maxv << endl;


    return 0;
}
