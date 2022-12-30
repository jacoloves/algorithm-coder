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
    int vc = pow(2, N);

    vector<P> pv, tmp_pv;

    for(int i=0; i<vc; ++i) {
        pair<int, int> pp;
        pp.first = i+1;
        cin >> pp.second;
        pv.push_back(pp);
    }

    for(int i=1; i<N; ++i) {
        for(int j=0; j<(vc/i)-1; j+=2) {
            pair<int, int> pp;
            if (pv[j].second > pv[j+1].second) {
                pp.first = pv[j].first;
                pp.second = pv[j].second;
                tmp_pv.push_back(pp);
            } else {
                pp.first = pv[j+1].first;
                pp.second = pv[j+1].second;
                tmp_pv.push_back(pp);
            }
        }
        // pv init
        pv.erase(pv.begin(), pv.end());
        pv = tmp_pv;
        // tmp_pv init
        tmp_pv.erase(tmp_pv.begin(), tmp_pv.end());
    }

    int ans = (pv[0].second > pv[1].second) ? pv[1].first : pv[0].first;

    cout << ans << endl;
    return 0;
}