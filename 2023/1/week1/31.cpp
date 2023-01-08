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
    int n,m;
    cin >> n >> m;
    vector<P> pv(m);

    if(m==0) {
        cout << n << endl;
        return 0;
    }

    for(int i=0; i<m; ++i) {
        cin >> pv[i].first >> pv[i].second;
    }

    vector<int> ansv(n);

    for(int i=0; i<n; ++i) {
        ansv[i] = 0;
    }

    for(auto e : pv) {
        ansv[e.first-1]++;
        ansv[e.second-1]++;
    }

    int i=0;
    int cnt=0;
    while (i+1<=n) {
        i += ansv[i]+1;
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}