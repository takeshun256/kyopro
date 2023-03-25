#include <iostream>
#include <vector>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    // 入力行列を受け取る
    vector<vector<char>> matrix(R, vector<char>(C));
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> matrix[i][j];
        }
    }

    // 爆弾の範囲か範囲外かの記憶する行列を作成し、マンハッタン距離による範囲内をfalseにする
    vector<vector<bool>> bomb_matrix(R, vector<bool>(C, false));
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (isdigit(matrix[i][j])) {
                int power = matrix[i][j] - '0';
                for (int k = 0; k < R; k++) {
                    for (int l = 0; l < C; l++) {
                        int manhattan_distance = abs(i - k) + abs(j - l);
                        if (manhattan_distance <= power) {
                            bomb_matrix[k][l] = true;
                        }
                    }
                }
            }
        }
    } 

    // 爆弾の影響を受けなかったマスは'.'に置き換えて出力する
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (bomb_matrix[i][j]) {
                cout << ".";
            } else {
                cout << matrix[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}
