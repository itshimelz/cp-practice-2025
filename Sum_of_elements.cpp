#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfMatrix(int N, int M, vector<vector<int>> Grid) {
        int sum = 0;

        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                sum = sum + Grid[i][j];
            }
        }
        return sum;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> Grid(N, vector<int>(M));

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> Grid[i][j];
        }
    }

    Solution obj;

    cout << obj.sumOfMatrix(N, M, Grid) << endl;

    return 0;
}
