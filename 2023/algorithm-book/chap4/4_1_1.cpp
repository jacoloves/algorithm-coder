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
    ll ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    ll BAx = (ax - bx), BAy = (ay - by);
    ll BCx = (cx - bx), BCy = (cy - by);
    ll CAx = (ax - cx), CAy = (ay - cy);
    ll CBx = (bx - cx), CBy = (by - cy);

    int pattern = 2;
    if (BAx * BCx + BAy * BCy < 0LL) pattern = 1;
    if (CAx * CBx + CAy * CBy < 0LL) pattern = 3;

    double Answer = 0.0;
    if (pattern == 1) Answer = sqrt(BAx * BAx + BAy * BAy);
    if (pattern == 3) Answer = sqrt(CAx * CAx + CAy * CAy);
    if (pattern == 2) {
        double S = abs(BAx * CAy - BAy + CAx);
        double BCLength = sqrt(BCx * BCx + BCy * BCy);
        Answer = S / BCLength;
    }

    printf("%.12lf\n", Answer);
    return 0;
}
