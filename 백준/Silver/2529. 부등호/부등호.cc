#include <iostream>
#include <algorithm>

using namespace std;

int n;
vector<char> v;
vector<bool> used(10, false);
string maxResult = "";
string minResult = "";

void dfs(int idx, string current){
    if(idx == n+1){
        if(maxResult.empty() || current > maxResult){
            maxResult = current;
        }
        if(minResult.empty() || current < minResult){
            minResult = current;
        }
        return;
    }
    
    for(int i = 0; i <= 9; i++){
        if(used[i]) continue;
        
        if(idx == 0 || 
           (v[idx-1] == '<' && current.back() - '0' < i) ||
           (v[idx-1] == '>' && current.back() - '0' > i)){
            
            used[i] = true;
            dfs(idx + 1, current + to_string(i));
            used[i] = false;
        }
    }
}

int main()
{
    
    cin >> n;
    
    v.resize(n);
    
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    
    dfs(0, "");
    
    cout << maxResult << "\n" << minResult << "\n";
    
    return 0;
}