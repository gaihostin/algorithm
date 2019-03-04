#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int> > & grid) {
        if (grid.size() <= 0) {
            return 0;
        }
        int m = grid.size();
        int n = grid[0].size();
        int result = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int l = j - 1;
                int r = j + 1;
                int u = i - 1;
                int d = i + 1;

                if (grid[i][j] == 1) {
                    if (l < 0 || grid[i][l] == 0) result += 1;
                    if (u < 0 || grid[u][j] == 0) result += 1;
                    if (r > n - 1 || grid[i][r] == 0) result += 1;
                    if (d > m - 1 || grid[d][j] == 0) result += 1;
                }
            }
        }
        return result;
    }
};

int main() {
    vector<vector<int> >arr;
    int row, column;
    cout << "please input the row and column:";
    cin >> row >> column;
    arr.resize(row);

    for (int i = 0; i < row; i++) {
        arr[i].resize(column);
    }

    for (int m = 0; m < row; m++) {
        for (int n = 0; n < column; n++) {
            cin >> arr[m][n];
        }
    }

    Solution* s = new Solution();
    int res = s->islandPerimeter(arr);
    cout << res ;


    delete s;

    return 0;

}