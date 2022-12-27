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
    int N;
    cin >> N;
    vector<ll> T(N);

    for (int i=0; i<N; ++i) cin >> T[i];

    int M;
    cin >> M;
    vector<P> pv(M);

    for (int i=0; i<M; ++i) cin >> pv[i].first >> pv[i].second;

    for (auto ppv : pv) {
        vector<ll> ct = T;
        ll sum = 0;
        ct[ppv.first-1] = ppv.second;
        for (auto ctt : ct) {
            sum += ctt;
        }
        cout << sum << endl;
    }

    return 0;
}