#include <algorithm>  // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <bitset>     // bitset
#include <cctype>     // isupper, islower, isdigit, toupper, tolower
#include <cmath>
#include <cstdint>        // int64_t, int*_t
#include <cstdio>         // printf
#include <deque>          // deque
#include <iostream>       // cout, endl, cin
#include <map>            // map
#include <queue>          // queue, priority_queue
#include <regex>          // regex
#include <set>            // set
#include <stack>          // stack
#include <string>         // string, to_string, stoi
#include <tuple>          // tuple, make_tuple
#include <unordered_map>  // unordered_map
#include <unordered_set>  // unordered_set
#include <utility>        // pair, make_pair
#include <vector>         // vector

using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main()
{
    int n, m;
    cin >> n >> m;
    map<int, int> mp;

    if (m == 0) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b]++;
    }

    int cnt = 0;
    int cnt2 = 0;

    for (auto mpe : mp) {
        if (mpe.second == 1) cnt++;
        if (mpe.second == 2) cnt2++;
    }

    if (cnt == 2 && cnt2 == n - 2)
        cout << "Yes";
    else
        cout << "No";
    cout << endl;

    return 0;
}
