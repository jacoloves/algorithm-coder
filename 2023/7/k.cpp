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
    vector<int> a(n+1);
    for(int i=1; i<=n; i++) {
        cin >> a[i];
    }

    vector<int> fl(n+1,0),s;
    int v=1;
    while(fl[v] == 0) {
        fl[v] = 1;
        s.push_back(v);
        v = a[v];
    }

    vector<int> res;
    for(auto &nx : s) {
        if (nx == v){ v = -1; }
        if (v == -1){ res.push_back(nx); }
    }

    cout << res.size() << endl;
    for(int i=0; i<res.size(); ++i) {
        if(i) { cout << " "; }
        cout << res[i];
    } 
    cout << endl;

    return 0;
}
