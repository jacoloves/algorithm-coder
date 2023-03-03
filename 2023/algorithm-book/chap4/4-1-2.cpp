#include <algorithm>  // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <atcoder/all>
#include <bitset>  // bitset
#include <cctype>  // isupper, islower, isdigit, toupper, tolower
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
    int n;
    cin >> n;

    vector<double> x(n);
    vector<double> y(n);

    for (int i = 0; i < n; ++i) cin >> x[i] >> y[i];

    vector<double> ans(n);
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            double p1 = pow((x[i] - x[j]), 2);
            double p2 = pow((y[i] - y[j]), 2);
            double pp = sqrt(p1 + p2);
            ans.push_back(pp);
        }
    }

    double answer = *min_element(ans.begin(), ans.end());

    cout << answer << endl;

    return 0;
}
