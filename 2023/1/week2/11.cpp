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

ll max_replace_number(ll n)
{
    vector<int> v;
    ll tmp_n = n;
    int n_size = 0;
    while (tmp_n > 0) {
        tmp_n /= 10;
        n_size++;
    }

    for (int i = 1; i <= n_size; ++i) {
        v.push_back(n % 10);
        n /= 10;
    }

    for (int i = 0; i < v.size() - 1; ++i) {
        int tmp_num;
        for (int j = v.size() - 1; j > i; --j) {
            if (v[j] > v[j - 1]) {
                tmp_num = v[i];
                v[i] = v[j];
                v[j] = tmp_num;
            }
        }
    }

    ll pow_num = pow(10, n_size - 1);

    ll max_num = 0;
    for (int i = 0; i < n_size; ++i) {
        max_num += v[i] * pow_num;
        pow_num /= 10;
    }

    return max_num;
}

ll min_replace_number(ll n)
{
    vector<int> v;
    ll tmp_n = n;
    int n_size = 0;
    while (tmp_n > 0) {
        tmp_n /= 10;
        n_size++;
    }

    for (int i = 1; i <= n_size; ++i) {
        if (n % 10 != 0) {
            v.push_back(n % 10);
        }
        n /= 10;
    }

    for (int i = 0; i < v.size() - 1; ++i) {
        int tmp_num;
        for (int j = v.size() - 1; j > i; --j) {
            if (v[j] < v[j - 1]) {
                tmp_num = v[i];
                v[i] = v[j];
                v[j] = tmp_num;
            }
        }
    }

    ll pow_num = pow(10, v.size() - 1);

    ll min_num = 0;
    for (int i = 0; i < v.size(); ++i) {
        min_num += v[i] * pow_num;
        pow_num /= 10;
    }

    return min_num;
}

int main()
{
    ll N;
    int K;
    cin >> N >> K;

    if (K == 0) {
        cout << N << endl;
        return 0;
    }

    ll ans = N;
    for (int i = 1; i <= K; ++i) {
        ans = max_replace_number(ans) - min_replace_number(ans);
    }

    cout << ans << endl;

    return 0;
}
