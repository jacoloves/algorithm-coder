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

ll N,A[200009];
ll cnt[100009];
ll Answer = 0;

int main() {
    cin >> N;
    for(int i=1; i<=N; ++i) cin >> A[i];

    for (int i=1; i<=99999; ++i) cnt[i]=0;
    for (int i=1; i<=N; ++i) cnt[A[i]]++;

    for (int i=1; i<=49999; ++i) {
        Answer += cnt[i] * cnt[100000-i];
    }
    Answer += cnt[50000] * (cnt[50000]-1)/2;

    cout << Answer << endl;
    return 0;
}
