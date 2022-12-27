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

    vector<int> a(N);
    map<int, int> m;

    for (int i=0; i<N; ++i) {
        cin >> a[i];
        m[a[i]]++;
    }

    int A = 1 - (N % 2);
    for (int i=0; i<(N+1)/2; ++i) {
        if (m[A] != (A == 0 ? 1 : 2)) {
            puts("0");
            return 0;
        }
        A += 2;
    }

    int Ans = 1;
    for (int i=0; i<N/2; ++i) {
        Ans = (Ans * 2) % MOD;
    }

    cout << Ans << endl;
    return 0;
}