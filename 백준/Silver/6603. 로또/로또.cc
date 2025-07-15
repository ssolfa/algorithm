#include <iostream>
#include <vector>
using namespace std;

vector<int> nums;
vector<int> selected;
int k;

void dfs(int idx, int cnt) {
    if(cnt == 6){
        for(int i=0; i<6 ; i++){
        cout << selected[i];
        if (i < 5) cout << " ";
    }
        cout << "\n";
        return;
    }
    
    for (int i = idx; i < k; i++) {
        selected.push_back(nums[i]);
        dfs(i + 1, cnt + 1);
        selected.pop_back();
    }
}

int main() {
    while (true) {
        cin >> k;
        if (k == 0) break;
        
        nums.clear();
        nums.resize(k);
        
        for (int i = 0; i < k; i++) {
            cin >> nums[i];
        }
        
        selected.clear();
        dfs(0, 0);
        cout << "\n";
    }
    
    return 0;
}