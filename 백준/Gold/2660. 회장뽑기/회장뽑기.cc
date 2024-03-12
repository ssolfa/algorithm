#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
 
vector<int> v[51];
bool visited[51];
int N;
int score[51];
 
int bfs(int start) {
    int maxdepth = 0;
    memset(visited, 0, sizeof(visited));
    queue<pair<int, int>> q;
    q.push(make_pair(start, 0));
    visited[start] = true;
    while (!q.empty()) {
        int node = q.front().first;
        int depth = q.front().second;
        maxdepth = max(maxdepth, depth);
        q.pop();
        for (int i = 0; i < v[node].size(); i++) {
            int next = v[node][i];
            if (!visited[next]) {
                visited[next] = true;
                q.push(make_pair(next, depth+1));
            }
        }
    }
    return maxdepth;
}
 
int main() {
    cin >> N;
    while (1) {
        int a, b;
        cin >> a >> b;
        if (a == -1 && b == -1)
            break;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int minscore = 987654321;
    int presidentcnt = 0;
    vector<int> president;
 
    for (int i = 1; i <= N; i++) {
        score[i] = bfs(i);
        if (score[i] < minscore) {
            minscore = score[i];
            presidentcnt = 1;
            president.clear();
            president.push_back(i);
        }
        else if (score[i] == minscore) {
            presidentcnt++;
            president.push_back(i);
        }
    }
    cout << minscore << ' ' << president.size() << endl;
    for (int i = 0; i < president.size(); i++) {
        cout << president[i] << ' ';
    }
}