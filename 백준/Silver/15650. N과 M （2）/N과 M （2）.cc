#include <iostream>
#include <vector>

using namespace std;

int n,m;
vector <int> result;

void dfs(int start, int depth){
    if(depth == m){
        for(int i=0 ; i<m ; i++){
            cout << result[i] << ' ';
        }
        cout << '\n';
    }
    
    for(int i=start ; i<=n ; i++){
        result.push_back(i);
        dfs(i+1, depth+1);
        result.pop_back();
    }
}

int main()
{
    cin >> n >> m;
    
    dfs(1, 0);
}