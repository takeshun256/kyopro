#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool is_happy_string(const vector<int>& count) {
    for (int c : count) {
        if (c % 2 == 1) {
            return false;
        }
    }
    return true;
}

int count_happy_pairs(string s) {
    int n = s.size();
    vector<int> count(10, 0);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int num = s[j] - '0';
            count[num]++;
            if (is_happy_string(count)) {
                ans++;
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
