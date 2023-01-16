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
    ll N;
    cin >> N;
    map<string, int> mp;

    for (int i = 1; i <= N; ++i) {
        string S, T;
        cin >> S >> T;
        mp[S]++;
        mp[T]++;
    }

    map<int, int> mp2;
    for (auto mpe : mp) {
        mp2[mpe.second]++;
    }

    bool flg = true;
    int comp_num = 0;
    int cnt = 0;
    for (auto mpe : mp2) {
        if (cnt == 0) {
            comp_num = mpe.second;
            cnt++;
        }
        else {
            if (comp_num != mpe.second) {
                flg = false;
                break;
            }
        }
    }

    if (flg)
        cout << "No";
    else
        cout << "Yes";

    cout << endl;

    return 0;
}
