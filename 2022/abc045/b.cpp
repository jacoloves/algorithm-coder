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
    string sa, sb, sc;
    cin >> sa >> sb >> sc;

    char cursor = sa[0];
    sa.erase(sa.begin());

    char ans;
    while(true) {
        if (cursor == 'a' && sa.length() == 0) {
            ans = 'A';
            break;
        } else if (cursor == 'a') {
            cursor = sa[0];
            sa.erase(sa.begin());
        } else if (cursor == 'b' && sb.length() == 0) {
            ans = 'B';
            break;
        } else if (cursor == 'b') {
            cursor = sb[0];
            sb.erase(sb.begin());
        } else if (cursor == 'c' && sc.length() == 0) {
            ans = 'C';
            break;
        } else if (cursor == 'c') {
            cursor = sc[0];
            sc.erase(sc.begin());
        }

    }

    cout << ans << endl;
    return 0;
}