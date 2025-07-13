#include <iostream> 
#include <algorithm>

using namespace std;
int R, C;
char board[21][21];
bool visited[26];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int maxPath = 0; 

void dfs(int x, int y, int count){
    maxPath = max(maxPath, count);

    for(int i=0 ; i<4 ; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(nx >= 0 && nx < R && ny >= 0 && ny <C && !visited[board[nx][ny]-'A']){
            visited[board[nx][ny]-'A'] = true;
            dfs(nx,ny,count + 1);
            visited[board[nx][ny] - 'A'] = false;
         }
    }
}


int main()
{
    cin >> R >> C;
    
    for(int i=0 ; i< R ; i++){
        for(int j=0 ; j<C ; j++){
            cin >> board[i][j];
        }
    }
    
    visited[board[0][0] - 'A'] = true;
    
    dfs(0,0,1);
    
    cout << maxPath;

}