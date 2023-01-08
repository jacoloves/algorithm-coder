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
    int a,b;
    cin >> a >> b;
    vector<P> pv(n);

    for(int i=0; i<n; ++i) {
        cin >> pv[i].first;
        pv[i].second = 0;
    }

    int cnt = 0;
    vector<int> v;
    bool one_flg = false;
    bool two_flg = false;
    bool three_flg = false;
    for (int i=0; i<n; ++i) {
        if (pv[i].second == 1) continue;
        if (pv[i].first <= a && !one_flg) {
            v.push_back(i);
            one_flg = true;
        } else if (pv[i].first >= a+1 && pv[i].first <= b && !two_flg) {
            v.push_back(i);
            two_flg = true;
        } else if (pv[i].first >= b+1 && !three_flg) {
            v.push_back(i);
            three_flg = true;
        }

        if (one_flg && two_flg && three_flg) {
            for (auto ev : v) {
                pv[ev].second = 1;
            }
            cnt++;
            v.erase(v.begin(), v.end());
            one_flg = false;
            two_flg = false;
            three_flg = false;
            i=0;
        }
    }

    cout << cnt << endl;
    return 0;
}