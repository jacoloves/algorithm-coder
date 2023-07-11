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
    int a;
    cin >> a;
    vector<int> v;
    for (int i=0; i<a; ++i) {
        int b;
        cin >> b;
        v.push_back(b);
    }

    // output
    for (int i=0; i<a; ++i) {
        if (i == a-1) {
            cout << v[i] << endl;
        } else {
            cout << v[i] << " ";
        }
    }


    for(int i=1; i<a; ++i) {
        int c = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > c)
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = c;
        // output
        for (int i=0; i<a; ++i) {
            if (i == a-1) {
                cout << v[i] << endl;
            } else {
                cout << v[i] << " ";
            }
        }
    } 
    return 0;
}
