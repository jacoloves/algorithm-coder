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
    deque<int> a;
    rep(i, n) {
        string s;
        cin >> s;
        int b;
        if (s == "insert" || s == "delete") {
            cin >> b;
        }
        if (s == "insert") {
            a.push_front(b);
        } else if (s == "delete") {
            int cnt = 0;
            for (auto e : a) {
                if (e == b) {
                    a.erase(a.begin() + cnt);
                    break;
                }
                cnt++;
            }
        } else if (s == "deleteFirst") {
            a.pop_front();
        } else if (s == "deleteLast") {
            a.pop_back();
        }
    }

    int cnt = 0;
    for (auto e : a) {
        if (cnt == a.size() - 1) {
            cout << e << endl;
        } else {
            cout << e << " ";
        }
        cnt++;
    }

    return 0;
}
