#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> X(N, 0);

    for (int i=0;i<Q;++i){
        int a, b;
        cin >> a >> b;
        if (a == 1){
            X[b-1] += 1;
        }
        else if (a == 2){
            X[b-1] += 2;
        } else {
            if (X[b-1]>=2){
                cout << "Yes" << endl;
            } else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
