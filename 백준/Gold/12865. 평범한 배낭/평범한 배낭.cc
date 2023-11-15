#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
int W[101], V[101], arr[101][100001];

int main(){
    cin >> N >> K;
    for(int i = 1 ; i<=N ; i++)
        cin >> W[i] >> V[i];

    for(int i=1 ; i<=N ; i++){
        for(int j=1 ; j<=K ; j++){
            if(W[i] > j)
                arr[i][j] = arr[i-1][j];
            else
                arr[i][j] = max(arr[i-1][j], arr[i-1][j-W[i]] + V[i]);
        }
    }
    cout << arr[N][K];
}
