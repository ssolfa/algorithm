#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    int dp[30][30];
    
    for(int i = 0; i < 30; i++){
        dp[i][0] = 1;
        dp[i][i] = 1;
    }
    
    for(int i = 2; i < 30; i++){
        for(int j = 1; j < i; j++){
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }
    
    for(int i = 0; i < t; i++){
        int n, m;
        cin >> n >> m;
        cout << dp[m][n] << endl;
    }
}