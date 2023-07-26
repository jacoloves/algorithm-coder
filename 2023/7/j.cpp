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
    int n,q;
    cin >> n >> q;

    deque<pair<string, int>> que;
    deque<pair<string, int>> ans;

    for (int i=0; i<n; ++i) {
        string name;
        int time;
        cin >> name >> time;

        que.push_back(make_pair(name, time));
    }

    int cnt = 0;
    while (ans.size() != n) {
        if (que.front().second > q) {
            que.front().second -= q;
            cnt += q;
            pair<string, int> pt = que.front();
            que.pop_front();
            que.push_back(pt);
        } else {
            cnt += que.front().second;
            pair<string, int> pt = make_pair(que.front().first, cnt);
            que.pop_front();
            ans.push_back(pt);
        }
    }

    for (auto e : ans) {
        cout << e.first << " " << e.second << endl;
    }


    return 0;
}
