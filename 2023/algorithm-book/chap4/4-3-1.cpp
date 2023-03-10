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
    double r = 2.0;
    double a = 2.0;

    for (int i = 1; i <= 5; i++) {
        double zahyo_x = a;
        double zahyo_y = a * a;

        double sessen_a = 2.0 * zahyo_x;
        double sessen_b = zahyo_y - sessen_a * zahyo_x;

        double next_a = (r - sessen_b) / sessen_a;
        printf("Step #%d: a = %.12lf -> %.12lf\n", i, a, next_a);
    }
    return 0;
}
