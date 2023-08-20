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

int value(int a[], int s, int p) {
    int w = 0, k = 1;
    for (int i=0; i<s; i++) {
        if (w + a[i] <= p) {
            w += a[i];
        } else {
            w = a[i];
            k++;
        }
    }
    return k;
}

int main() {
    int n, k;
    cin >> n >> k;
    int w[n];
    int max = 0; int sum = 0;

    for (int i = 0; i < n; i++){
        cin >> w[i];
        if (max < w[i]) {
            max = w[i];
        }
        sum += w[i];
    }
    while (max != sum) {
        int mid = (max + sum) / 2;
        if (value(w, n, mid) > k) {
            max = mid + 1;
        } else {
            sum = mid;
        }
    }
    cout << max << endl;
    return 0;
}
