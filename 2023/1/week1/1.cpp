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
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    int sta;
    if (a == b) {
        cout << x << endl;
    } else if (a > b) {
        // 階段のみ
        int stairs = 0;
        for(int i=a; i>=b; --i) {
            stairs += y;
        }
        stairs += x;
        // 廊下のみ
        int corridors = 0;
        for(int i=a; i>=b; --i) {
            corridors += x;
            if (i-1 == b) {
                break;
            } else {
                corridors += x;
            }
        }

        cout << min(stairs, corridors) << endl;
    } else {
        // 階段のみ
        int stairs = 0;
        for(int i=a; i<b; ++i) {
            stairs += y;
        }
        stairs += x;
        // 廊下のみ
        int corridors = 0;
        for(int i=a; i<b; ++i) {
            corridors += 2*x;
        }
        corridors += x;

        cout << min(stairs, corridors) << endl;
    }
    return 0;
}