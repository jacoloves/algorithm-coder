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

    string tmp_s = "";
    ll l = s.size();

    int save_i = -1;
    bool same_flg = false;
    for (int i=0; i<l; ++i) {
        if (s[i] == '(') {
            save_i = i;
        } else if (s[i] == ')') {
            for (int j=save_i+1; j<i; ++j) {
                if (tmp_s.find(s[j]) != string::npos) {
                    tmp_s.erase(tmp_s.find(s[j]));
                }
            }
        } else {
            if (tmp_s.find(s[i]) != string::npos) {
                same_flg = true;
                break;
            } else {
                tmp_s += s[i];
            }
        }
    }

    if (same_flg) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}