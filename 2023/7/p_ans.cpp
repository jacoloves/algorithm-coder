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

/* typedef */

typedef long long ll;
typedef set<ll> sll;

/* global variables */

/* subroutines */

ll s2i(string &s) {
  int n = s.size();
  ll bits = 0;
  for (int i = 0; i < n; i++) {
    ll d;
    switch(s[i]) {
    case 'A': d = 1; break;
    case 'C': d = 2; break;
    case 'G': d = 3; break;
    case 'T': d = 4; break;
    }
    bits |= (d << (i * 3));
  }
  return bits;
}

/* main */

int main() {
  int n;
  cin >> n;

  sll dict;
  
  while (n--) {
    string op, s;
    cin >> op >> s;

    ll bits = s2i(s);
    if (op == "insert") dict.insert(bits);
    else if (op == "find")
      cout << ((dict.find(bits) != dict.end()) ? "yes" : "no") << endl;
  }
  return 0;
}