#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, arr[300], stair[300], dp[300] = {0};
    cin >> N;
    for(int i=0 ; i<N ; i++){
        cin >> arr[i];
    }

    for(int i=0 ; i<N ; i++){
        stair[i] = arr[i];
    }

    dp[0] = stair[0];
    dp[1] = max(stair[0] + stair[1], stair[1]);
    dp[2] = max(stair[0] + stair[2], stair[1] + stair[2]);

    for(int i=3 ; i<N ; i++){
        dp[i] = max(dp[i-2] + stair[i], dp[i-3] + stair[i-1] + stair[i]);
    }
    
    cout << dp[N-1];
}