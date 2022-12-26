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
    stack<string> st;
    st.push("");
    set<char> cs;
    for (char c : s) {
        if (c == '(') {
            st.push("");
        } else if (c == ')') {
            for (char x : st.top()) {
                cs.erase(x);
            }
            st.pop();
        } else {
            if (cs.count(c)) {
                cout << "No" << endl;
                return 0;
            }
            cs.insert(c);
            st.top() += c;
        }
    }
    cout << "Yes" << endl;
    return 0;
}