#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);

	for(int i=0; i<N;++i) {
		cin >> A[i];
	}
	
	for(int i=0; i<N;++i) {
		if (A[i] % 2 == 0) {
			cout << A[i] << " ";
		}
	}
	cout << endl;
	return 0;
}

