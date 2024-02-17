#include <iostream>
using namespace std;

int main() {
    int n, m, card[100];
    int sum=0, max=0;
    cin >> n >> m;
    
    for(int i=0 ; i<n ; i++){
        cin >> card[i];
    }

    for(int i=0 ; i<n ; i++){
        for(int j=i+1; j<n ; j++){
            for(int k=j+1; k<n; k++){
                sum = card[i] + card[j] + card[k];
                if(sum > max && sum <= m){
                    max = sum;
                }
            }
        }
    }
    cout << max;
}