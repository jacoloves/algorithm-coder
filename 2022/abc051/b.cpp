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
    int k,s;
    cin >> k >> s;

    int cnt = 0;
    if (s > 3*k) {
        cout << cnt << endl;
        return 0;
    }
    for (int x=0; x<=k; ++x) {
        int s1 = s - x;
        if (s1 > 2*k) continue;
        for (int y=0; y<=k; ++y) {
            int s2 = s1 - y;
            if (s2 > k) continue;
            for (int z=0; z<=k; ++z) {
                int s3 = s2 - z;
                if (s3 > k) continue;
                if (x+y+z == s) cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}