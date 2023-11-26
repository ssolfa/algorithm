#include <iostream>
using namespace std;

int N, ans;
int arr[9], temp[9];
bool visited[9];

int result(){
    int result = 0;
    for(int i = 0 ; i< N-1 ; i++){
        result += abs(temp[i] - temp[i+1]);
    }
    return result;
}

void dfs(int k){
    if(k == N){
        ans = max(ans, result());
    }
    for(int i = 0 ; i<N ; i++){
        if(!visited[i]){
            visited[i] = true;
            temp[k] = arr[i];
            dfs(k+1);
            visited[i] = false;
        }
    }
}

int main(){
    cin >> N;
    for(int i = 0 ; i<N ; i++){
        cin >> arr[i];
    }
    for(int i = 0 ; i<N ; i++){
        visited[i] = true;
        temp[0] = arr[i];
        dfs(1);
        visited[i] = false;
    }
    cout << ans;
}