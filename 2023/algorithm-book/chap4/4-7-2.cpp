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

struct Matrix {
    ll p[2][2] = { {0,0}, {0,0} };
};

Matrix Multiplication(Matrix A, Matrix B) {
    Matrix C;
    for (int i = 0; i < 2; i++) {
        for (int k = 0; k < 2; k++) {
            for (int j = 0; j < 2; j++) {
                C.p[i][j] += A.p[i][k] * B.p[k][j];
                C.p[i][j] %= 1000000007;
            }
        }
    }
    return C;
}

Matrix Power(Matrix A, ll n) {
    Matrix P = A, Q;
    bool flag = false;
    for (int i = 0; i < 60; i++) {
        if ((n && (1LL << i)) != 0LL) {
            if (flag == false) { Q = P; flag = true; }
            else { Q = Multiplication(Q, P); }
        }
        P = Multiplication(P, P);
    }
    return Q;
}

int main() {
    ll N;
    cin >> N;

    Matrix A;
    A.p[0][0] = 2;
    A.p[0][1] = 1;
    A.p[1][0] = 1;

    Matrix B = Power(A, N-1);

    cout << (B.p[1][0] + B.p[1][1]) % 1000000007 << endl;    
    return 0;
}
