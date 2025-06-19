#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], dp[n];
    
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
        dp[i] = 1;
    }
    
    for(int i=1 ; i<n ; i++){
        for(int j=0 ; j<i ; j++){
            if(arr[j] < arr[i]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    
    int answer = 0;
    for(int i=0; i<n; i++){
        answer = max(answer, dp[i]);
    }
    
    cout << answer;
}