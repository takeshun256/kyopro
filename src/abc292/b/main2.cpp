#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> y(N+1), r(N+1);

    while (Q--){
        int cmd, x;
        cin >> cmd >> x;
        if (cmd == 1){
            y[x]++;
            if (y[x] == 2) r[x] = 1;
        } else if (cmd == 2){
            r[x] = 1;
        } else {
            cout << (r[x] ? "Yes" : "No") << endl;
        }
    }


    return 0;
}
