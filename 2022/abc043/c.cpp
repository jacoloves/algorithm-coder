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
    vector<int> v(n);

    for (int i=0; i<n; ++i) {
        cin >> v[i];
    }

    int max_n = *max_element(v.begin(), v.end());
    int min_n = *min_element(v.begin(), v.end());

    int ans = 1000000000;
    for (int i=min_n; i<=max_n; ++i) {
        int sum = 0;
        for (int j=0; j<n; ++j) {
            sum += pow(v[j]-i, 2);
        }
        ans = min(ans, sum);
    }

    cout << ans << endl;
    return 0;
}
