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
    vector<int> D(7);
    vector<int> J(7);

    for(int i=0; i<7; ++i) {
        cin >> D[i];
    }

    for(int i=0; i<7; ++i) {
        cin >> J[i];
    }

    ll sum = 0;
    for(int i=0; i<7; ++i) {
        if (J[i] >= D[i]) {
            sum += J[i];
        } else {
            sum += D[i];
        }
    }

    cout << sum << endl;
    return 0;
}