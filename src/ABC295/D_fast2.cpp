#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int count_happy_pairs(string s) {
    int n = s.size();
    vector<int> count(10);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int num = s[j] - '0';
            if (count[num] % 2 == 0) {
                ans++;
            }
            count[num]++;
            if (count[num] % 2 == 0) {
                ans--;
            }
        }
        // iの次のループのために、countをリセットする
        fill(count.begin(), count.end(), 0);
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    cout << count_happy_pairs(s) << endl;
    return 0;
}
