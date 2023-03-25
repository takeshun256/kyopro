#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> socks(N);
    for (int i = 0; i < N; i++) {
        cin >> socks[i];
    }

    // 各色の靴下の枚数を記録する
    unordered_map<int, int> count;
    for (int i = 0; i < N; i++) {
        count[socks[i]]++;
    }

    // 各色の靴下の枚数からペアにできる靴下の数を計算する
    int pairs = 0;
    for (auto it = count.begin(); it != count.end(); it++) {
        pairs += it->second / 2;
    }

    cout << pairs << endl;

    return 0;
}
