#include <iostream>
#include <cstring>
using namespace std;

int N;
int graph[100][100];
bool visited[100];

void dfs(int start){
    for(int i=0 ; i<N ; i++){
        if(graph[start][i] && !visited[i]){
            visited[i] = true;
            dfs(i);
        }
    }
}

int main(){
    cin >> N;

    for(int i=0 ; i<N ; i++){
        for(int j=0 ; j<N ; j++){
            cin >> graph[i][j];
        }
    }
    
    for(int i=0 ; i<N ; i++){
        memset(visited, false, sizeof(visited));
        dfs(i);
        for(int j=0 ; j<N ; j++){
            if(visited[j]){
                cout << 1 << " ";
            }
            else{
                cout << 0 << " ";
            }
        }
        cout << "\n";
    }
}
