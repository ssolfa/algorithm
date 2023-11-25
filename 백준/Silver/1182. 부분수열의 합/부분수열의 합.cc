#include <iostream>
using namespace std;

int N, S, cnt;
int arr[21];

void dfs(int k, int sum) {
    if (k == N) {
        if (sum == S) {
            cnt++;
        }
        return;
    }
    dfs(k + 1, sum + arr[k]);
    dfs(k + 1, sum);
}

int main() {
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    dfs(0, 0);
    if (S == 0) {
        cnt--;
    }
    cout << cnt;
    return 0;
}