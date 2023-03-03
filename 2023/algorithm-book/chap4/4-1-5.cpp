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

ll cross(ll ax, ll ay, ll bx, ll by) { return ax * by - ay * bx; }

int main()
{
    ll X1, Y1, X2, Y2, X3, Y3, X4, Y4;
    cin >> X1 >> Y1;
    cin >> X2 >> Y2;
    cin >> X3 >> Y3;
    cin >> X4 >> Y4;

    ll ans1 = cross(X2 - X1, Y2 - Y1, X3 - X1, Y3 - Y1);
    ll ans2 = cross(X2 - X1, Y2 - Y1, X4 - X1, Y4 - Y1);
    ll ans3 = cross(X4 - X3, Y4 - Y3, X1 - X3, Y1 - Y3);
    ll ans4 = cross(X4 - X3, Y4 - Y3, X2 - X3, Y2 - Y3);

    if (ans1 == 0 && ans2 == 0 && ans3 == 0 && ans4 == 0) {
        pair<ll, ll> A = make_pair(X1, Y1);
        pair<ll, ll> B = make_pair(X2, Y2);
        pair<ll, ll> C = make_pair(X3, Y3);
        pair<ll, ll> D = make_pair(X4, Y4);
        if (A > B) swap(A, B);
        if (C > D) swap(C, D);
        if (max(A, C) <= min(B, D))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        return 0;
    }

    bool IsAB = false, IsCD = false;
    if (ans1 >= 0 && ans2 <= 0) IsAB = true;
    if (ans1 <= 0 && ans2 >= 0) IsAB = true;
    if (ans3 >= 0 && ans4 <= 0) IsCD = true;
    if (ans3 <= 0 && ans4 >= 0) IsCD = true;

    if (IsAB == true && IsCD == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}
