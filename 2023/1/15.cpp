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
    int n,a,b;
    cin >> n >> a >> b;

    while(true) {
        // alice turn
        if (a+1 != b) {
            a++;
        } else {
            if (a-1 == 0) {
                // alice lose
                cout << "Borys" << endl;
                break;
            } else {
                a--;
            }
        }

        // borys turn
        if (b-1 != a) {
            b--;
        } else {
            if (b+1 > n) {
                // borys lose
                cout << "Alice" << endl;
                break;
            } else {
                b++;
            }
        }
    }
    return 0;
}