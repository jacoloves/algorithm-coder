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
    int x, y, z;
    cin >> x >> y >> z;

    int sum = 0;
    // x > 0 && y < 0
    // x < 0 && y > 0
    if ((x > 0 && y < 0) && (x < 0 && y > 0)) {
        sum += abs(x);
    }
    else if ((x > 0 && y > 0) && (x < y)) {
        sum += x;
    }
    else if ((x < 0 && y < 0) && (x > y)) {
        sum += abs(x);
    }
    else if ((x > 0 && y > 0 && z > 0) && (z > x && z > y)) {
        sum += -1;
    }
    else if ((x < 0 && y < 0 && z < 0) && (z < x && z < y)) {
        sum += -1;
    }
    else {
        if (x < 0 && z < 0) {
            sum += abs(x);
        }
        else if (x < 0 && z > 0) {
            sum += z;
            sum += abs(sum) + z;
        }
        else {
            sum += abs(z);
            sum += x - z;
        }
    }

    cout << sum << endl;
    return 0;
}
