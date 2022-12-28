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

const ll MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    ll sum = 1;
    ll cnt = 1;

    vector<int> v;

    for (int i=1; i<=N; ++i) {
        sum *= i;
    }

    for (ll p=2; p*p<=sum; ++p) {
        if (sum % p != 0) {
            continue;
        }

        int e = 0;
        while (sum % p == 0) {
            ++e;
            sum /= p;
        }

        v.push_back(e);
    }

    if (sum != 1) {
        v.push_back(1);
    }

    for (auto ve : v) {
        cout << ve << endl;
    }

    return 0;
}