#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    
    for(int i=n-1 ; i>=0 ; i--){
        cin >> arr[i];
    }
    
    int sum=0;
    for(int i=0; i<n ; i++){
        if(arr[i] <= k){
            sum += k / arr[i];
            k = k % arr[i];
        }
    }
    cout << sum << endl;
}