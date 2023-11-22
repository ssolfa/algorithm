#include <iostream>
using namespace std;
int main(){
    int N, ans = 0;
    cin >> N;
    
    for(int i = 1 ; i < N ; i++){
        int sum = 0;
        int temp = i;
        while(temp != 0){
            sum += temp % 10;
            temp /= 10;
        }
        if (sum + i == N){
            ans = i;
            break;
        }
    }
    cout << ans;
}