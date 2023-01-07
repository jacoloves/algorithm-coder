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
    int t;
    cin >> t;

    int n;
    vector<ll> a;
    vector<int> v;
    ll c;

    for(int i=0; i<t; ++i) {
        cin >> n;
        v.push_back(n);
        for(int j=0; j<n; ++j) {
            cin >> c;
            a.push_back(c);
        }
    }

    int sum_cnt = 0;
    int ans = 0;
    int i=0;
    for(auto e : a){
        sum_cnt++;
        if(e%2 != 0) ans++;
        if(sum_cnt == v[i]) {
            i++;
            cout << ans << endl;
            ans = 0;
            sum_cnt = 0;
        }
    }
    return 0;
}