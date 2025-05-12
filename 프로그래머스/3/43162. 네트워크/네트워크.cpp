#include <string>
#include <vector>

using namespace std;

void dfs(int start, vector<vector<int>>& computers, vector<bool>& visited){
    visited[start] = true;
    
    for(int i=0 ; i<computers.size(); i++){
        if(computers[start][i]==1 && !visited[i])
            dfs(i,computers, visited);
    }       
}

int solution(int n, vector<vector<int>> computers) {
    
    vector<bool> visited (n, false);
    
    int network = 0;
    
    for(int i=0 ; i<n; i++){
        if(!visited[i]){
            network++;
            dfs(i, computers, visited);
        }
    }   
        
    return network;
}