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

int cnt = 0;

void insertionSort(vector<int>& array, int n, int g) {
    int v,j;
    for(int i=g; i<n; i++) {
        v = array[i];
        j = i - g;
        while (j >= 0 && array[j] > v) {
            array[j+g] = array[j];
            j = j - g;
            cnt++;
        }
        array[j+g] = v;
    }
}

void shellSort(vector<int> array, int n) {
    int m = 0;
    int s = 1;

    while ((n/s) > 0) {
        s *= 2;
        m++;
    }

    int G[20];

    for(int k=0, t=1; k<m; ++k) {
        G[k] = n/t;
        t *= 2;
    }

    for(int i=0; i<n; ++i) {
        insertionSort(array, n, G[i]);
    }

    cout << m << endl;

    for(int i=0; i<m; ++i) {
        if(i != m-1) {
            cout << G[i];
        } else {
            cout << G[i] << endl;
        }
    }

    cout << cnt << endl;

    for(int i=0; i<n; ++i) {
        cout << array[i] << endl;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> array;

    for(int i=0; i<n; ++i) {
        int a;
        cin >> a;
        array.push_back(a);
    }

    shellSort(array, n);

    return 0;
}
