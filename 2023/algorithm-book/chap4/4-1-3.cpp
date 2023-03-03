#include <algorithm>  // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <atcoder/all>
#include <bitset>  // bitset
#include <cctype>  // isupper, islower, isdigit, toupper, tolower
#include <cmath>
#include <cstdint>        // int64_t, int*_t
#include <cstdio>         // printf
#include <deque>          // deque
#include <iostream>       // cout, endl, cin
#include <map>            // map
#include <queue>          // queue, priority_queue
#include <regex>          // regex
#include <set>            // set
#include <stack>          // stack
#include <string>         // string, to_string, stoi
#include <tuple>          // tuple, make_tuple
#include <unordered_map>  // unordered_map
#include <unordered_set>  // unordered_set
#include <utility>        // pair, make_pair
#include <vector>         // vector

using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

double X1, Y1, R1;
double X2, Y2, R2;

int main()
{
    cin >> X1 >> Y1 >> R1;
    cin >> X2 >> Y2 >> R2;

    double d = sqrt((X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2));

    if (d < abs(R1 - R2))
        cout << "1" << endl;
    else if (d == abs(R1 - R2))
        cout << "2" << endl;
    else if (d < R1 + R2)
        cout << "3" << endl;
    else if (d == R1 + R2)
        cout << "4" << endl;
    else
        cout << "5" << endl;
    return 0;
}
