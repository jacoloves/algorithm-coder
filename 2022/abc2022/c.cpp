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

bool answer(int a, int b[], int k) {
    int g=a;
    int j=0;
    while(g!=0)
    {
        j++;
        g=g/10;
    }
    int i=0;
    int c[j];
    while(a!=0) {
        c[i] = a%10;
        i++;
        a=a/10;
    }
    bool find=0;
    for (int y=0; y<j; y++) {
        for (int r=0; r<k; r++) {
            if (c[y] == b[r]) {
                find=1;
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    int n,k;
    cin >> n >> k;
    int a[k];
    for(int i=0; i<k; i++) {
        cin >> a[i];
    }

    while(true) {
        if (answer(n,a,k) == 0) {
            cout << n;
            return 0;
        }
        n++;
    }
}
