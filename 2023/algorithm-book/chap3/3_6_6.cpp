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

int N,A[20009], C[200009];

void MergeSort(int l, int r) {
    if (r-l == 1) return;

    int m=(l+r)/2;
    MergeSort(l,m);
    MergeSort(m,r);

    int c1 = l, c2 = m, cnt = 0;
    while(c1 != m || c2 != r) {
        if (c1 == m) {
            C[cnt] = A[c2]; c2++;
        }
        else if (c2 == r) {
            C[cnt] = A[c1]; c1++;
        }
        else {
            if (A[c1] <= A[c2]) {
                C[cnt] = A[c1]; c1++;
            } else {
                C[cnt] = A[c2]; c2++;
            }
        }
    }
}

int main() {
    cin >> N;
    for (int i=1; i<=N; i++) cin >> A[i];

    MergeSort(1, N+1);
    for (int i=1; i<=N; i++) cout << A[i] << endl;
    return 0;
}
