#include <iostream>
using namespace std;

int main() {
    int n;
    bool house[16][16] = {0};
    int ans[16][16][3] = {0};

    cin >> n;
    for(int i=0 ; i<n ; i++){
        for (int j=0; j<n; j++)
			cin >> house[i][j];
    }

    ans[0][1][0] = 1;
    for(int i=2 ; i<n ; i++){
        if(!house[0][i]){
            ans[0][i][0] = ans[0][i-1][0];
        }
    }

    for(int i=1 ; i<n ; i++){
        for(int j=2 ; j<n ; j++){
            if(!house[i][j]){
                ans[i][j][0] = ans[i][j - 1][0] + ans[i][j - 1][1];
				ans[i][j][2] = ans[i - 1][j][1] + ans[i - 1][j][2];
                if(!house[i-1][j] && !house[i][j-1]){
					ans[i][j][1] = ans[i - 1][j - 1][0] + ans[i - 1][j - 1][1] + ans[i - 1][j - 1][2];
                }
            }
        }
    }

    cout << ans[n - 1][n - 1][0] + ans[n - 1][n - 1][1] + ans[n - 1][n - 1][2];
}