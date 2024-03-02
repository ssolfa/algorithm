#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int n, m;
int graph[1001][1001];
bool visited[1001];

int dfs(int start, int end) {
    if (start == end) return 0;
    visited[start] = true;
    int ans = 987654321;
    for (int i = 1; i <= n; i++) {
        if (graph[start][i] != 0 && !visited[i]) {
            ans = min(ans, graph[start][i] + dfs(i, end));
        }
    }
    return ans;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n - 1; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a][b] = c;
        graph[b][a] = c;
    }
    for (int i = 0; i < m; i++) {
        memset(visited, false, sizeof(visited));
        int a, b;
        cin >> a >> b;
        cout << dfs(a, b) << endl;
    }
}