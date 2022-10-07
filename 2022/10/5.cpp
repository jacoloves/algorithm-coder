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

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    int n;
    string ans = "";
    cin >> n;

    string ans2 = ans;

    int n2 = n;

    while (n >= 1)  {
        if (n % 2 == 0) ans = "0" + ans;
        if (n % 2 == 1) ans = "1" + ans;
        n = n / 2; 
    }

    while (n2 >= 1)  {
        if (n2 % 3 == 0) ans2 = "0" + ans2;
        if (n2 % 3 == 1) ans2 = "1" + ans2;
        if (n2 % 3 == 2) ans2 = "2" + ans2;
        n2 = n2 / 3;
    }

    cout << "binary number: " << ans << endl;
    cout << "ternary number: " << ans2 << endl;


    return 0;
}