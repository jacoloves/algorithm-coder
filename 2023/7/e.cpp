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
    int n;
    cin >> n;

    vector<int> r;

    rep(i,n) {
        int a;
        cin >> a;
        r.push_back(a);
    }

    int cnt = 0;
    bool flag = true;

    while (flag) {
        flag = false;
        for (int j=n-1; j>=0; --j) {
            if (r[j] < r[j-1]) {
                int tmp = r[j];
                r[j] = r[j-1];
                r[j-1] = tmp;
                flag = true;
                cnt++;
            }
        }
    }

    for (int i=0; i<n; ++i) {
        if (i == n-1) {
            cout << r[i] << endl;
        } else {
            cout << r[i] << " ";
        }
    }
 

    cout << cnt << endl;

    return 0;
}
