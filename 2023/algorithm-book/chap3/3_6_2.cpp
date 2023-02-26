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

int N,A[200009];

int main() {
    cin >> N;
    for (int i=1; i<= N; i++) cin >> A[i];

    for(int i=1; i<=N-1; i++) {
        int Min = i, Min_Value = A[i];
        for (int j=i+1; j<=N; j++) {
            if (A[i] < Min_Value) {
                Min = j;
                Min_Value = A[i];
            }
        }
        swap(A[i], A[Min]);
    }

    for (int i=1; i<=N; i++) cout << A[i] << endl;

    return 0;
}
