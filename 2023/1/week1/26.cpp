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
    int n;
    cin >> n;
    int cnt = 0;
    int ans = 0;

    int ans_num = -1;

    for (int i=1; i<=n; ++i) {
        int div_i = i;
        while(true) {
            if(div_i == 0) break;
            if(div_i%2 == 0) {
                div_i /= 2;
                cnt++;
            } else {
                break;
            }
        }
        ans = max(ans, cnt);
        if(ans == cnt) ans_num = i;
        cnt = 0;
    }

    cout << ans_num << endl;
    return 0;
}