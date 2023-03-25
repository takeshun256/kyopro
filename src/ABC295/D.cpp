#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

// 嬉しい列かどうかを判定する関数
bool is_happy_string(string s) {
    unordered_map<char, int> count;
    for (char c : s) {
        count[c]++;
    }
    bool result = true;
    for (auto it = count.begin(); it != count.end(); it++) {
        if (it->second % 2 == 1) {
            result = false;
            break;
        }
    }
    return result;
}

// 嬉しい列である部分文字列の数を数える関数
int count_happy_pairs(string s) {
    int n = s.size();
    unordered_map<string, int> freq;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            string sub = s.substr(i, j-i+1);
            // cout << sub << " "<< is_happy_string(sub)<<endl;
            if (is_happy_string(sub)) {
                ans++;
            }
        }
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    cout << count_happy_pairs(s) << endl;
    return 0;
}
