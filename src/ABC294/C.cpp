#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N), B(M), C(N + M);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        C[i] = A[i];
    }

    for (int i = 0; i < M; ++i) {
        cin >> B[i];
        C[N + i] = B[i];
    }

    sort(C.begin(), C.end());

    for (int i = 0; i < N; ++i) {
        int pos = lower_bound(C.begin(), C.end(), A[i]) - C.begin() + 1;
        cout << pos << (i == N - 1 ? '\n' : ' ');
    }

    for (int i = 0; i < M; ++i) {
        int pos = lower_bound(C.begin(), C.end(), B[i]) - C.begin() + 1;
        cout << pos << (i == M - 1 ? '\n' : ' ');
    }

    return 0;
}

