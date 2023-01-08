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
    int h,m;
    cin >> h >> m;

    int comp_h = 0;
    int comp_m = 0;

    while(true) {
        comp_h = (h/10)*10 + m/10;
        comp_m = (h%10)*10 + m%10;

        if (comp_h>23 || comp_m>59) {
            m++;
            if(m == 60) {
                h++;
                m=0;
            }
            if(h == 24) {
                h=0;
            }
        } else {
            break;
        }
    }

    cout << h << " " << m << endl;
    return 0;
}