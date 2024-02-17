#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

int N, M;
bool check[13];
vector<pair<int, int>> House;
vector<pair<int, int>> Pick;
vector<pair<int, int>> Chicken;
int Min = 987654321;

void getChicken(int x, int cnt) {
    if (cnt == M) {
        int res = 0;
        for (int i = 0; i < House.size(); i++) {
            int min_dist = 987654321;
            for (int j = 0; j < Pick.size(); j++) {
                min_dist = min(min_dist, abs(House[i].first - Pick[j].first) + abs(House[i].second - Pick[j].second));
            }
            res += min_dist;
        }
        Min = min(Min, res);
        return;
    }
    for (int i = x; i < Chicken.size(); i++) {
        if (check[i] == true)
            continue;
        check[i] = true;
        Pick.push_back(Chicken[i]);
        getChicken(i, cnt + 1);
        check[i] = false;
        Pick.pop_back();
    }
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int n;
            cin >> n;
            if (n == 1)
                House.push_back({i, j});
            else if (n == 2)
                Chicken.push_back({i, j});
        }
    }
    getChicken(0, 0);
    cout << Min;
}