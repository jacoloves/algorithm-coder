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
    ll n, x;
    cin >> n >> x;
    ll a[n+1];
    for (int i=1; i<=n; ++i) cin >> a[i];
    ll ans = 0;
    for (int i=2; i<=n; ++i) {
        if (a[i] + a[i-1]>x) {
            ll diff = a[i]+a[i-1]-x;
            ll mn=min(a[i], diff);
            ans += mn;
            a[i] -= mn;
            diff -= mn;
            if(diff) a[i-1]-=diff, ans+=diff;
        }
    }
    cout << ans << endl;
    return 0;
}