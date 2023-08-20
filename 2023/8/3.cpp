#include <iostream>      // cout, endl, cin
#include <string>        // string, to_string, stoi
#include <vector>        // vector
#include <algorithm>     // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility>       // pair, make_pair
#include <tuple>         // tuple, make_tuple
#include <cstdint>       // int64_t, int*_t
#include <cstdio>        // printf
#include <map>           // map
#include <queue>         // queue, priority_queue
#include <set>           // set
#include <stack>         // stack
#include <deque>         // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset>        // bitset
#include <cctype>        // isupper, islower, isdigit, toupper, tolower
#include <regex>         // regex
#include <cmath>

using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

/*
#include <bits/stdc++.h>
using namespace std;
void Koch(double x1, double y1, double x5, double y5, double n){
  if (n == 0){
    cout << x1 << ' ' << y1 << endl;
  } else {
    double x2 = (x1 * 2 + x5) / 3;
    double y2 = (y1 * 2 + y5) / 3;
    double x3 = x1 + (x5 - x1) / 2 - sqrt(3) / 6 * (y5 - y1);
    double y3 = y1 + (y5 - y1) / 2 + sqrt(3) / 6 * (x5 - x1);
    double x4 = (x1 + x5 * 2) / 3;
    double y4 = (y1 + y5 * 2) / 3;
    Koch(x1, y1, x2, y2, n - 1);
    Koch(x2, y2, x3, y3, n - 1);
    Koch(x3, y3, x4, y4, n - 1);
    Koch(x4, y4, x5, y5, n - 1);
  }
}
int main(){
  cout << fixed << setprecision(20);
  int n;
  cin >> n;
  double x1 = 0;
  double y1 = 0;
  double x2 = 100;
  double y2 = 0;
  Koch(x1, y2, x2, y2, n);
  cout << x2 << ' ' << y2 << endl;
}
*/

void koch(double x1, double y1, double x2, double y2, double n)
{
    if (n == 0)
    {
        cout << x1 << ' ' << y1 << endl;
    }
    else
    {
        double x3 = (2 * x1 + x2) / 3;
        double y3 = (2 * y1 + y2) / 3;
        double x4 = x1 + (x2 - x1) / 2 - sqrt(3) / 6 * (y2 - y1);
        double y4 = y1 + (y2 - y1) / 2 + sqrt(3) / 6 * (x2 - x1);
        double x5 = (x1 + x2 * 2) / 3;
        double y5 = (y1 + y2 * 2) / 3;
        koch(x1, y1, x3, y3, n - 1);
        koch(x3, y3, x4, y4, n - 1);
        koch(x4, y4, x5, y5, n - 1);
        koch(x5, y5, x2, y2, n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    double x1 = 0;
    double y1 = 0;
    double x2 = 100;
    double y2 = 0;
    koch(x1, y1, x2, y2, n);
    cout << x2 << ' ' << y2 << endl;

    return 0;
}
