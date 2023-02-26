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

int AnswerX[200009] = {};
int AnswerY[200009] = {};

int main()
{
    int N;
    cin >> N;
    string s;
    cin >> s;

    int x = 0;
    int y = 0;
    AnswerX[x]++;
    AnswerY[y]++;

    bool flg = false;

    for (auto c : s) {
        cout << "(" << x << ", " << y << ")" << endl;
        if (c == 'R')
            x++;
        else if (c == 'L')
            x--;
        else if (c == 'U')
            y++;
        else if (c == 'D')
            y--;

        AnswerX[x]++;
        AnswerY[y]++;
        /*
        if (AnswerX[x] == 2 && AnswerY[y] == 2) {
            flg = true;
            break;
        }
        */
    }

    if (flg)
        cout << "Yes";
    else
        cout << "No";

    cout << endl;

    return 0;
}
