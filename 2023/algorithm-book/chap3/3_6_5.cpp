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

int N,A[109];

int solve(int l, int r) {
    if (r-1 == 1) return A[l];
    int m = (l+r) / 2;
    int s1 = solve(l,m);
    int s2 = solve(m,r);
    return s1 + s2;
}

int main() {
    cin >> N;
    for (int i=1; i<= N; i++) cin >> A[i];

    int Answer = solve(1, N+1);
    cout<< Answer << endl;

    return 0;
}
