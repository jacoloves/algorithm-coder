#include <algorithm>  // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <atcoder/all>
#include <bitset>  // bitset
#include <cctype>  // isupper, islower, isdigit, toupper, tolower
#include <cmath>
#include <cstdint>  // int64_t, int*_t
#include <cstdio>   // printf
#include <deque>    // deque
#include <functional>
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
    int N;
    cin >> N;
    vector<double> v;

    for (int i = 0; i < N * 5; ++i) {
        double num;
        cin >> num;
        v.push_back(num);
    }

    // max
    sort(v.begin(), v.end());
    for (int i = 1; i <= N; ++i) {
        v.pop_back();
    }

    // min
    sort(v.begin(), v.end(), greater<int>{});
    for (int i = 1; i <= N; ++i) {
        v.pop_back();
    }

    double sum = 0;
    for (int i : v) {
        sum += i;
    }

    double ans = double(sum / v.size());

    printf("%.12f\n", ans);

    return 0;
}
