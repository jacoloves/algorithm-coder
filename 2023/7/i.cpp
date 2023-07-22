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

// AOJ
#include <sstream>

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
    string str;
    getline(cin, str);

    vector<string> vc;

    istringstream iss(str);
    string e;

    while (iss >> e) {
        vc.push_back(e);
    }

    vector<int> vi;
    for (auto vc_e : vc) {
        bool is_number = false;
        for (char c : vc_e) {
            if (isdigit(c)) {
                is_number = true;
                break;
            }
        }

        if (is_number) {
           int number = stoi(vc_e);
             vi.push_back(number);
        } else {
            if (vc_e == "+") {
                int pop2 = vi.back();
                vi.pop_back();
                int pop1 = vi.back();
                vi.pop_back();
                int res = pop1+pop2;
                vi.push_back(res);
            } else if (vc_e == "-") {
                int pop2 = vi.back();
                vi.pop_back();
                int pop1 = vi.back();
                vi.pop_back();
                int res = pop1-pop2;
                vi.push_back(res);
            } else {
                int pop2 = vi.back();
                vi.pop_back();
                int pop1 = vi.back();
                vi.pop_back();
                int res = pop1*pop2;
                vi.push_back(res);
            }
        }
    }

    cout << vi[0] << endl;

    return 0;
}
