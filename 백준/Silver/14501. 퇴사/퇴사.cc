#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, Tsum=0 , Psum=0;
    cin >> n;
    vector <pair<int, int>> calender(n);
    vector<int> dp(n + 1, 0);
    
    for(int i=0 ; i<n ; i++){
        cin >> calender[i].first >> calender[i].second;
    }
    
    for(int i= n-1 ; i >= 0 ; i--){
        int nextDay = i + calender[i].first;
        if(nextDay <= n){
            dp[i] = max(dp[i+1], calender[i].second + dp[nextDay]);
        }
        else{
            dp[i] = dp[i+1];
        }
    }
    
    cout << dp[0];

}