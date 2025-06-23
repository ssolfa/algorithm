#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> result;
vector<bool> used;

void solve(int depth){
    if(depth == m){
        for(int i=0 ; i<m ; i++){
            cout << result[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for(int i=1 ; i<=n ; i++){
        if(!used[i]){
            used[i] = true;
            result.push_back(i);
            
            solve(depth + 1);
            
            result.pop_back();
            used[i] = false;
        }
    }
}

int main()
{
    cin >> n >> m;
    used.resize(n + 1, false);
    solve(0);
}