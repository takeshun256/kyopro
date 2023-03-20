#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    using namespace std;

    unsigned N, M;
    cin >> N >> M;

    vector<unsigned> A(N), B(M);
    for (auto &&a : A) cin >> a;
    for (auto &&b : B) cin >> b;

    vector<unsigned> C(N + M);
    merge(begin(A), end(A), begin(B), end(B), begin(C));

    for (const auto a : A)
        cout << lower_bound(begin(C), end(C), a) - begin(C) + 1 << " ";
    cout << endl;

    for (const auto b : B)
        cout << lower_bound(begin(C), end(C), b) - begin(C) + 1 << " ";
    cout << endl;

    return 0;
}

