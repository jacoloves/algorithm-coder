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
    vector<vector<int>> a(n);
    for (int i=0; i<n; i++) {
        int f,s;
        cin >> f >> s;
        a[f-1].push_back(s);
    }

    int ans = 0;
    for (int i=0; i<n; i++) {
        sort(a[i].rbegin(), a[i].rend());
        if (a[i].size() < 2) continue;
        int now = a[i][0] + a[i][1]/2;
        ans = max(ans, now);
    }
    
    vector<int> b;
    for (int i=0; i<n; i++) {
        if (a[i].size() == 0) continue;
        b.push_back(a[i][0]);
    }
    sort(b.rbegin(), b.rend());
    if (b.size() >= 2) ans = max(ans, b[0] + b[1]);
    cout << ans << endl;

    return 0;
}
