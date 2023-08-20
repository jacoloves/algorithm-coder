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

    stack<pair<char, int>> st;
    vector<P> v;

    for (int i=0; i<n; ++i) {
        if (s[i] == '\\') {
            st.push(make_pair(s[i], i));
        } else if (s[i] == '/') {
            if (!st.empty() && st.top().first == '\\')  {
                pair<char,int> p = st.top();
                st.pop();
                v.push_back(make_pair(p.second, i));
            } else {
                st.push(make_pair(s[i], i));
            }
        } 
    }

    sort(v.begin(), v.end());

    int a = -1, b = 0, sum = 0;
    vector<int> ans;

    for (int i=0; i<v.size(); ++i) {
        int &li = v[i].first;
        int &ri = v[i].second;
        if (a < li) {
            if (b > 0) {
                ans.push_back(b);
            }
            b = 0;
            a = ri;
        }

        int c = ri - li;
        b += c;
        sum += c;
    }

    if (b > 0) {
        ans.push_back(b);
    }

    cout << sum << endl;
    cout << ans.size();
    for (int i=0; i<ans.size(); ++i) {
        cout << " " << ans[i];
    }
    cout << endl;

    return 0;
}
