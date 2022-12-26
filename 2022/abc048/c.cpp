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
    ll n,x;
    cin >> n >> x;
    vector<ll> a(n);

    for (int i=0; i<n; ++i) {
        cin >> a[i];
    }

    ll cnt = 0;
    sort(a.begin(), a.end());
    for (int i=0; i<n-1; ++i) {
        if (a[i] > x) {
            cnt += a[i] - x;
            ll minus_sum = x - a[i];
            if (minus_sum < 0) minus_sum = 0;
            a[i] = minus_sum;
        }
        if (x < a[i] + a[i+1]) {
            ll minus_sum = x - a[i];
            if (minus_sum < 0) minus_sum = 0;
            cnt += a[i+1] - minus_sum;
            a[i+1] = minus_sum;
        }
    }

    cout << cnt << endl;
    return 0;
}