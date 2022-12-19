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

    map<char, int> mp;

    for (int i=0; i<s.length(); ++i) {
        auto itr = mp.find(s[i]);
        if (itr == mp.end()) {
            mp[s[i]] = 1;
        } else {
            itr->second++;
        }
    }

    bool flg = true;
    for (auto itr=mp.begin(); itr != mp.end(); ++itr) {
        if (itr->second % 2 != 0) {
            flg = false;
            break;
        }
    }

    if (flg) cout << "Yes" << "\n";
    else cout << "No" << "\n";

    return 0;
}
