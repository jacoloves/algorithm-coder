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

const vector<string> strs = {"dream", "dreamer", "erase", "eraser"};

int main() {
    string S;
    cin >> S;

    vector<bool> dp(S.size()+1, false);
    dp[0] = true;
    for (int i=1; i<=S.size(); ++i) {
        for (auto str : strs) {
            if (i >= str.size() &&
                dp[i - str.size()] &&
                S.substr(i - str.size(), str.size()) == str) {
                dp[i] = true;
            }
        }
    }

    if (dp[S.size()]) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}