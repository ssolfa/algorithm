#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int cost[1000][3], dp[1000][3];
    int n;
    cin >> n;
    
    for(int i=0 ; i<n ; i++){
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
    }
    
    dp[0][0] = cost[0][0];
    dp[0][1] = cost[0][1];
    dp[0][2] = cost[0][2];
    
    for(int i=1 ; i<n ; i++){
        dp[i][0] = cost[i][0] + min(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = cost[i][1] + min(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = cost[i][2] + min(dp[i-1][0], dp[i-1][1]);
    }

    int answer = min({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
    cout << answer;
}