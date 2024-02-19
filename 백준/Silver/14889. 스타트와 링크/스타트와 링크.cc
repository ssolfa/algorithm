#include <iostream>
#include <algorithm>
using namespace std;

int n, ans = -1;
int board[21][21];
bool visited[21];

void dfs(int depth, int count) {
    if (depth == n / 2) {
        int team1 = 0, team2 = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (visited[i] && visited[j]) {
                    team1 += board[i][j];
                } else if (!visited[i] && !visited[j]) {
                    team2 += board[i][j];
                }
            }
        }
        int diff = abs(team1 - team2);
        if (ans == -1 || diff < ans)
            ans = diff;
    }

    for (int i = count; i <= n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            dfs(depth + 1, i + 1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> board[i][j];
        }
    }
    dfs(0, 1);
    cout << ans;
}