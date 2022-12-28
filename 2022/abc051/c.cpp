#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <regex> // regex
#include <cmath>

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    int dx = tx - sx, dy = ty - sy;

    string res = "";

    // first
    for (int i=0; i<dx; ++i) res += "R";
    for (int i=0; i<dy; ++i) res += "U";
    for (int i=0; i<dx; ++i) res += "L";
    for (int i=0; i<dy; ++i) res += "D";

    // second
    res += "D";
    for (int i=0; i<=dx; ++i) res += "R";
    for (int i=0; i<=dy; ++i) res += "U";
    res += "L";
    res += "U";
    for (int i=0; i<=dx; ++i) res += "L";
    for (int i=0; i<=dy; ++i) res += "D";
    res += "R";

    cout << res << endl;
    return 0;
}