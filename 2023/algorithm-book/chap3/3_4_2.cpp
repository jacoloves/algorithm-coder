#include <iostream>
using namespace std;

int N, P[59], Q[59];
double Answer = 0.0;

int main() {
    cin >> N;
    for(int i = 0; i < N; i++) cin >> P[i] >> Q[i];

    for (int i = 0; i < N; i++) {
        Answer += 1.0*Q[i]/P[i];
    }

    cout << Answer << endl;
    return 0;
}
