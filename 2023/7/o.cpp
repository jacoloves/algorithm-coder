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

bool binary_search(vector<ll> s, ll key) {
    int left = 0;
    int right = s.size();
    while (left < right) {
        int mid = (left + right) / 2;
        if (s[mid] == key) return true;
        else if (s[mid] > key) right = mid;
        else left = mid + 1;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<ll> s(n);
    rep(i, n) cin >> s[i];
    int q;
    cin >> q;
    vector<ll> t(q);
    rep(i, q) cin >> t[i];

    int ans = 0;

    unique(s.begin(), s.end());

    rep(i, q) {
        if (binary_search(s, t[i])) ans++;
    }

    cout << ans << endl;

    return 0;
}
