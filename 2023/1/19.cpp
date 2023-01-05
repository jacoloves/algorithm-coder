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
    int x;
    cin >> x;

    vector<int> v;

    for (int i=1; i<=x; ++i) {
        for (int j=2; j<=x; ++j) {
            if (pow(i, j) > x) break;
            v.push_back(pow(i,j));
        }
        if (x == 1) {
            v.push_back(pow(1,2));
        }
    }

    int ans = *max_element(v.begin(), v.end());

    cout << ans << endl;
    return 0;
}