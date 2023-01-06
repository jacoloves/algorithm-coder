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
    string str;
    cin >> str;
    int w;
    cin >> w;
    vector<char> v;
    vector<char> ans;

    for(char e : str) {
        v.push_back(e);
        if(v.size() == w) {
            ans.push_back(v[0]);
            v.erase(v.begin(), v.end());
        }
    }

    for(auto e : ans) {
        cout << e;
    }

    if (v.size() > 0) {
        cout << v[0];
    }
    cout << endl;
    return 0;
}