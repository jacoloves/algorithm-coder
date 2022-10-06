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

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<ll>> vv(n, vector<ll>(200000));
    for (int i=0; i<n; i++) {
        int l;
        cin >> l;
        for (int j=0; j<l; j++) {
            ll insert_data;
            cin >> insert_data;
            vv[i][j] = insert_data;
        }
    }

    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<(sizeof(vv[i]) / sizeof(vv[i][0])); j++) {
    //         cout << vv[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << vv[0][1] << endl;

    return 0;
}