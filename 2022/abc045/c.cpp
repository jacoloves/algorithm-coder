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
    string s;
    cin >> s;
    int n = s.size();
    ll res = 0;
    for (int bit = 0; bit < (1<<(n-1)); ++bit) {
        ll tmp = 0;
        for (int i= 0; i < n-1; ++i) {
            tmp *= 10;
            tmp += s[i] - '0';
            if (bit & (1<<i)) {
                res += tmp;
                tmp = 0;
            }
        }
        tmp *= 10;
        tmp += s.back() - '0';
        res += tmp;
    }
    cout << res << endl;
    return 0;
}