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
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; ++i) cin >> A[i];

    int a100 = 0;
    int a200 = 0;
    int a300 = 0;
    int a400 = 0;
    for (int i = 0; i < N; ++i) {
        if (A[i] == 100)
            a100++;
        else if (A[i] == 200)
            a200++;
        else if (A[i] == 300)
            a300++;
        else if (A[i] == 400)
            a400++;
    }

    cout << (a100 * a400) + (a300 * a200) << endl;

    return 0;
}
