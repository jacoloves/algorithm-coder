#include <algorithm>  // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <bitset>     // bitset
#include <cctype>     // isupper, islower, isdigit, toupper, tolower
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

int main()
{
    int a, b;
    cin >> a >> b;

    switch (a) {
        case 1:
            if (b == 2 || b == 3)
                cout << "Yes";
            else
                cout << "No";
            break;
        case 2:
            if (b == 4 || b == 5)
                cout << "Yes";
            else
                cout << "No";
            break;
        case 3:
            if (b == 6 || b == 6)
                cout << "Yes";
            else
                cout << "No";
            break;
        case 4:
            if (b == 8 || b == 9)
                cout << "Yes";
            else
                cout << "No";
            break;
        case 5:
            if (b == 10 || b == 11)
                cout << "Yes";
            else
                cout << "No";
            break;
        case 6:
            if (b == 12 || b == 13)
                cout << "Yes";
            else
                cout << "No";
            break;
        case 7:
            if (b == 14 || b == 15)
                cout << "Yes";
            else
                cout << "No";
            break;
        default:
            cout << "No";
    }
    cout << endl;
    return 0;
}
