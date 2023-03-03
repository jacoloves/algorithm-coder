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

const double PI = 3.14159265358979;

int main()
{
    double A, B, H, M;
    cin >> A >> B >> H >> M;

    double AngleH = 30.0 * H + 0.5 * M;
    double AngleM = 6.0 * M;
    double Hx = A * cos(AngleH * PI / 180.0), Hy = A * sin(AngleH * PI / 180.0);
    double Mx = B * cos(AngleM * PI / 180.0), My = B * sin(AngleM * PI / 180.0);

    double d = sqrt((Hx - Mx) * (Hx - Mx) + (Hy - My) * (Hy - My));
    printf("%.12lf\n", d);

    return 0;
}
