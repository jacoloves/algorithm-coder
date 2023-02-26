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
    ll N;
    cin >> N;
    vector<ll> A(N);
    for(int i=0; i<N; ++i) cin >> A[i];

    ll a=0,b=0,c=0;
    for(int i=0; i<N; ++i) {
        if(A[i] == 1) a++;
        if(A[i] == 2) b++;
        if(A[i] == 3) c++;
    }

    ll ca=0,cb=0,cc=0;
    ca=a*(a-1)/2;
    cb=b*(b-1)/2;
    cc=c*(c-1)/2;

    cout << ca+cb+cc << endl;
    return 0;
}
