#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    string T = "";
    cin >> S;
    for (int i=0; i < S.size(); ++i){
       T += toupper(S[i]); 
    }
    
    cout << T << endl;
    return 0;
}
