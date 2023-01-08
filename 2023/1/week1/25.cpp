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
    string s;
    cin >> n;
    cin >> s;
    vector<char> cv;
    vector<char> cv_tmp;

    for (char s_e : s) {
        if(cv_tmp.size() >= 1) {
            if(cv_tmp[cv_tmp.size()-1] == 'B' && s_e == 'A') {
                cv_tmp.push_back('B');
                cv_tmp.push_back('B');
            } else if(cv_tmp[cv_tmp.size()-1] == 'B' && s_e == 'B') {
                cv_tmp.pop_back();
                cv_tmp.push_back('A');
            } else {
                cv_tmp.push_back(s_e);
            }
        } else {
            cv_tmp.push_back(s_e);
        }
    }

    for (auto e : cv_tmp) {
        if(cv.size() >= 1) {
            if(cv[cv.size()-1] == 'B' && e == 'A') {
                cv.push_back('B');
                cv.push_back('B');
            } else if(cv[cv.size()-1] == 'B' && e == 'B') {
                cv.pop_back();
                cv.push_back('A');
            } else {
                cv.push_back(e);
            }
        } else {
            cv.push_back(e);
        }
    }

    for (auto e : cv) {
        cout << e;
    }
    cout << endl;
    return 0;
}