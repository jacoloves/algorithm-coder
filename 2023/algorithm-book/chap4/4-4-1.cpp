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

int N;
bool prime[100000009];

int main()
{
    cin >> N;
    for (int i = 2; i <= N; i++) prime[i] = true;

    for (int i = 2; i * i <= N; i++) {
        if (prime[i] == true) {
            for (int x = 2 * i; x <= N; x += i) prime[x] = false;
        }
    }

    for (int i = 2; i <= N; i++) {
        if (prime[i] == true) cout << i << endl;
    }
    return 0;
}
