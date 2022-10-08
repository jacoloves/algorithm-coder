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
    cout << "問題2.2.2" << endl;
    cout << "sqrt(841.0) = " << sqrt(841.0) << endl;
    cout << "29^2 = " << pow(29.0, 2.0) << endl;
    cout << "sqrt(1024.0) = " << sqrt(1024.0) << endl;
    cout << "4^5 = " << pow(4.0, 5.0) << endl;

    cout << "問題2.2.3" << endl;
    cout << "13 & 14 = " << (13 & 14) << endl;
    cout << "13 | 14 = " << (13 | 14) << endl;
    cout << "13 ^ 14 = " << (13 ^ 14) << endl;
    cout << "8 | 4 | 2 | 1 = " << (((8 | 4) | 2) | 1) << endl;

    return 0;
}