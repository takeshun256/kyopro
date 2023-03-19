#include <iostream>
#include <queue>
#include <set>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    queue<int> called;
    set<int> not_visited;
    for (int i = 1; i <= N; ++i) {
        not_visited.insert(i);
    }

    for (int i = 0; i < Q; ++i) {
        int t;
        cin >> t;
        if (t == 1) {
            int next_person = *not_visited.begin();
            called.push(next_person);
        } else if (t == 2) {
            int x;
            cin >> x;
            not_visited.erase(x);
            
            // Remove x from called queue
            queue<int> new_called;
            while (!called.empty()) {
                int current = called.front();
                called.pop();
                if (current != x) {
                    new_called.push(current);
                }
            }
            called.swap(new_called);
            
        } else if (t == 3) {
            while (!called.empty() && not_visited.find(called.front()) == not_visited.end()) {
                called.pop();
            }
            if (!called.empty()) {
                int smallest_common = called.front();
                cout << smallest_common << endl;
        }
	}
    }

    return 0;
}

