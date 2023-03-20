#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

int main() {
    using namespace std;

    unsigned N, M;
    cin >> N >> M;

    vector<pair<unsigned, unsigned>> A(N), B(M);
    for (auto&&[a, _] : A) cin >> a;
    for (auto&&[b, _] : B) cin >> b;
    for (unsigned i{}; i < N; ++i) A[i].second = i;
    for (unsigned i{}; i < M; ++i) B[i].second = i + N;

    vector<pair<unsigned, unsigned>> C(N + M);
    merge(begin(A), end(A), begin(B), end(B), begin(C));

    vector<unsigned> ans(N + M);
    for (unsigned i{}; i < N + M; ++i) ans[C[i].second] = i;

    for (unsigned i{}; i < N + M; ++i) cout << ans[i] + 1 << " ";

    return 0;
}

