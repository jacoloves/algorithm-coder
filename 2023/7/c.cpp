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

bool isprime(ll a) {
    if (a == 2) {
        return true;
    }

    if (a < 2 || a % 2 == 0) {
        return false;
    }

    int i = 3;
    while (i <= sqrt(a)) {
        if (a % i == 0) {
            return false;
        }
        i += 2;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    vector<ll> v;

    rep(i,n) {
        ll a;
        cin >> a;
        v.push_back(a);
    }

    int cnt = 0;
    rep(i,n) {
        if (isprime(v[i])) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
