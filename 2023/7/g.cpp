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

    vector<pair<char, int>> bubble;

    rep(i,n) {
        string in;
        cin >> in;
        char letter = in[0];
        int number = stoi(in.substr(1));
        bubble.push_back(make_pair(letter, number));
    }

    vector<pair<char, int>> selection = bubble;

    // bubblersort
    for (int i=0; i<n; ++i) {
        for (int j=n-1; j>=i+1; --j) {
            if (bubble[j].second < bubble[j-1].second) {
                auto tmp = bubble[j];
                bubble[j] = bubble[j-1];
                bubble[j-1] = tmp;
            }
        }
    }

    string bubble_string;
    int ele_cnt = 1;
    for (auto ele : bubble) {
        string ele_str = string(1, ele.first) + to_string(ele.second);
        if (ele_cnt == n) {
            bubble_string += ele_str;
        } else {
            bubble_string += ele_str + " ";
        }
        ele_cnt++;
    }

    cout << bubble_string << endl;
    cout << "Stable" << endl;

    // selectionsort
    for (int i=0; i<n; ++i) {
        int minj = i;
        for (int j=i; j<n; ++j) {
            if (selection[j].second < selection[minj].second) {
                minj = j;
            }
        }
        if (i != minj) {
            auto tmp = selection[i];
            selection[i] = selection[minj];
            selection[minj] = tmp;
        }
    }

    string selection_string;
    ele_cnt = 1;
    for (auto ele : selection) {
        string ele_str = string(1, ele.first) + to_string(ele.second);
        if (ele_cnt == n) {
            selection_string += ele_str;
        } else {
            selection_string += ele_str + " ";
        }
        ele_cnt++;
    }

    cout << selection_string << endl;

    if (bubble_string == selection_string) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    return 0;
}
