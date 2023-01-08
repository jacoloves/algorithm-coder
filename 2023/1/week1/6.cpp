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

    int str_size = s.size() - 1;

    string pre_str = s.substr(0, str_size/2);
    string back_str = s.substr((str_size+3)/2, str_size);

    // s comp
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());

    if (s != rev_s) {
        cout << "No" << endl;
        return 0;
    }

    // pre_str comp
    string rev_pre_str = pre_str;
    reverse(rev_pre_str.begin(), rev_pre_str.end());

    if (pre_str != rev_pre_str) {
        cout << "No" << endl;
        return 0;
    }

    // back_str comp
    string rev_back_str = back_str;
    reverse(rev_back_str.begin(), rev_back_str.end());

    if (back_str != rev_back_str) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}